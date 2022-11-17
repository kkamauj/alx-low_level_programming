#ifndef DOG_H
#define DOG_H

/**
  * struct dog - dog class
  * @name: name
  * @age: age
  * @owner: owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  * dog-t - typedef for struct dog
  */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

