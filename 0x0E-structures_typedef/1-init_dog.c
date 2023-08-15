#include "dog.h"

/**
 * init_dog - initialize a var of struct dog.
 * @d: pointer to struct type dog
 * @name: pointer to char name's dog
 * @age: age's dog
 * @owner: pointer to char owner's dog
 * Return: No return
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}


