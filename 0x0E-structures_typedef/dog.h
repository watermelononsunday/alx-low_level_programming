#ifndef DOG_H
#define DOG_H

/**
 * dog_t - typedef for struct dog
 */
typedef strcut dog dog_t

/**
 * struct dog - struct that stores informaton of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owners name
 *
 * Description: struct called "dog" that stores its name, age and the name of its owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
