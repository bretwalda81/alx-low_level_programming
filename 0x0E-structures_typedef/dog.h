#ifndef DOG_H
#define DOG_H

/**
* struct dog - struct with elements
* @name: name of the dog
* @age: number in float
* @owner: owner name
*/
typedef struct dog
{
char *name;
float age;
char *owner;
}
dog_t;
/* the type def for struct dog */
int _putchar(int c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
