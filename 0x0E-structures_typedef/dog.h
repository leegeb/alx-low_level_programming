#ifndef DOG_H
#define DOG_H

/**
 * struct dog - details of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * poppy_dog - typedef for struct dog
 */
typedef struct dog poppy_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
