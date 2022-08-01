#ifndef DOG_H
#define DOG_H


nclude "dog.h"

#include <stdlib.h>



/**
 *
 *  * init_dog - Initializes a variable of type struct dog.
 *
 *   * @d: The dog to be initialized.
 *
 *    * @name: The name of the dog.
 *
 *     * @age: The age of the dog.
 *
 *      * @owner: The owner of the dog.
 *
 *       */

void init_dog(struct dog *d, char *name, float age, char *owner)

{

		if (d != NULL)

				{

							d->name = name;

									d->age = age;

											d->owner = owner;

												}

}
/**
 * struct dog - structure for a basic dog
 *
 * @name: Dog's name
 *
 * @age: Dog's age
 *
 * @owner: Dog's owner
 *
 * Description: data structure for dog
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

#endif

