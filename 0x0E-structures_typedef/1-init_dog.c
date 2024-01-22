#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -the function initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name:the  name to initialize
 * @age: age to be initialized
 * @owner:the  owner to be initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d == NULL)
			d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
}
