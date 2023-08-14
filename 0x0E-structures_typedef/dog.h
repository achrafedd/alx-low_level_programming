#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog struct
 *
 * @name: dog name
 * @owner: dog owner
 * @age: dog age
 *
 * Description: a dog struct
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
 * dog_t - type of dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
