#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: Name of the variable to be intitialized
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Descritpion: This struct is for dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
