#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* init_dog - initialise varriable struct dog
* @d: struct name
* @name: name of dog
* @age: age
* @owner: owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
