#ifndef DOG_H
#define DOG_H

/**
  * struct dog - dog attribute
  * @name: 1st member
  * @owner: 2nd member
  * @age: 3rd member
  *
  * Description: dog attribute
  */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
