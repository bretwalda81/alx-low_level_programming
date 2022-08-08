#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* new_dog - creates a new dog
* @name: new mane
* @owner: new owner
* @age: new age
*
* Return: pointer to new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newdog;

if (name == NULL || owner == NULL)
return (NULL);

newdog = malloc(sizeof(dog_t));
if (newdog == NULL)
return (NULL);

newdog->age = age;

return (newdog);
}
