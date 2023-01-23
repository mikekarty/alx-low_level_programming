#ifndef _DOG_H_
#define _DOG_H_

typedef struct dog dog_t;

/**
 * struct dog - dog's info
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Description: This struct is for dog
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
