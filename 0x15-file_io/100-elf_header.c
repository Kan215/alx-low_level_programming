#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

#define BUFF_SIZE 64

void print_error(const char *msg) {
    fprintf(stderr, "%s\n", msg);
    exit(98);
}

void print_elf_header_info(Elf64_Ehdr *ehdr) {
    int i;
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; ++i) {
        printf(" %02x", ehdr->e_ident[i]);
    }
    printf("\n");
    printf("  Class:                             %s\n", ehdr->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", ehdr->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", ehdr->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %d\n", ehdr->e_ident[EI_OSABI]);
    printf("  ABI Version:                       %d\n", ehdr->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", ehdr->e_type == ET_NONE ? "NONE (Unknown Type)" : 
                                                          ehdr->e_type == ET_REL ? "REL (Relocatable file)" :
                                                          ehdr->e_type == ET_EXEC ? "EXEC (Executable file)" :
                                                          ehdr->e_type == ET_DYN ? "DYN (Shared object file)" :
                                                          ehdr->e_type == ET_CORE ? "CORE (Core file)" : "Unknown Type");
    printf("  Entry point address:               0x%lx\n", (unsigned long)ehdr->e_entry);
}

int main(int argc, char *argv[]) {
    int fd;
    Elf64_Ehdr ehdr;

    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        print_error("Error: Cannot open file");
    }

    if (read(fd, &ehdr, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
        print_error("Error: Cannot read ELF header");
    }

    
    if (ehdr.e_ident[EI_MAG0] != ELFMAG0 || ehdr.e_ident[EI_MAG1] != ELFMAG1 || 
        ehdr.e_ident[EI_MAG2] != ELFMAG2 || ehdr.e_ident[EI_MAG3] != ELFMAG3) {
        print_error("Error: Not an ELF file");
    }

    print_elf_header_info(&ehdr);

    close(fd);
    return 0;
}
