#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: a pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
int i, name_len = 0, owner_len = 0;
while (name[name_len] != '\0')
name_len++;
while (owner[owner_len] != '\0')
owner_len++;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
new_dog->name = malloc(sizeof(char) * (name_len + 1));
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
for (i = 0; i < name_len; i++)
new_dog->name[i] = name[i];
new_dog->name[i] = '\0';
new_dog->owner = malloc(sizeof(char) * (owner_len + 1));
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
for (i = 0; i < owner_len; i++)
new_dog->owner[i] = owner[i];
new_dog->owner[i] = '\0';
new_dog->age = age;
return (new_dog);
}
