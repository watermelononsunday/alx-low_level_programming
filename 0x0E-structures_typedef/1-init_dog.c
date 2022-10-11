#include <stdio.h>
#include "main.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: array
 * @name: name
 * @owner: owner
 * Description: Strcut for a dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d == NULL)
		return;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
