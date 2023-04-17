#ifndef DOG_H
#define DOG_H

/**
 * struct dog - data type that has a dog's information
 * @name:first member of struct dog
 * @age:second member of struct dog
 * @owner:third member of struct dog
 *
 * Description:longer description
 */

struct dog
{
	char *name;
	float *age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
