#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structure for a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: This structure defines a dog with a name, age, and owner.
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to struct dog to initialize
 * @name: Name to assign to the dog
 * @age: Age to assign to the dog
 * @owner: Owner to assign to the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
