#include <stdlib.h>
#include "dog.h"

/**
* free_dog - frees dogs
* @d: pointer to struct
* Return: 0
*/
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
