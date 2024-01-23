#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - Represents information about a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
struct dog {
    char *name;
    float age;
    char *owner;
};

typedef struct dog dog_t;

/**
 * new_dog - Creates a new dog.
 * @name: The name of the new dog.
 * @age: The age of the new dog.
 * @owner: The owner of the new dog.
 *
 * Return: A pointer to the newly created dog, or NULL if an error occurs.
 */
dog_t *new_dog(char *name, float age, char *owner) {
    dog_t *newDog = malloc(sizeof(dog_t));

    if (newDog == NULL) {
        fprintf(stderr, "Error: Memory allocation failed\n");
        return NULL;
    }

    newDog->name = strdup(name);
    newDog->owner = strdup(owner);

    if (newDog->name == NULL || newDog->owner == NULL) {
        free(newDog->name);
        free(newDog->owner);
        free(newDog);
        fprintf(stderr, "Error: String duplication failed\n");
        return NULL;
    }

    newDog->age = age;

    return newDog;
}
