#ifndef FILE_DOG
#define FILE_DOG

/**
 * struct dog - structure dog
 * @name: dogs name
 * @age: dogs age
 * @owner: owners name
 * Descroption: The struct for a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
