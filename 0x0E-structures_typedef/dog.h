#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Dog description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_d - typedef for struct dog
 */
typedef struct dog dog_d;

void init_dog(struct dog *o, char *name, float age, char *owner);
void print_dog(struct dog *o);
dog_d *new_dog(char *name, float age, char *owner);
void free_dog(dog_d *o);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
