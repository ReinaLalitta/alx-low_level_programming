#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - a struct that creates a dog info
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: first struct with alx
 */

/**
 * dog_t - new name for struct dog
 */

typedef struct dog dog_t;
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
