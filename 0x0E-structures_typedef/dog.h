#ifndef DOG_H
#define DOG_H

/**
 * struct dog - creates a struct for dogs information
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description: The struct the dog is for
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char c);
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
