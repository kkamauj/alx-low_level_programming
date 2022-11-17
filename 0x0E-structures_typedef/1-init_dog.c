#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - initializes dog
  * @d: pointer to struct
  * @name: pointer to dog's name
  * @age: dog's age
  * @owner: owner of he dog
  *
  * Return: void
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

