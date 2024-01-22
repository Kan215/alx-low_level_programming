#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -A function that initializes a variable of type struct dog
 * @d:a  pointer to struct dog
 * @name: name of the dog to be initiliazed
 * @age: ageof the dog to initialize
 * @owner: owner to be initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d == NULL)
			d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
}
