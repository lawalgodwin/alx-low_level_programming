#ifndef DOG_H

#define DOG_H

/**
  * struct dog - A description of an object of type dog
  *
  * @name: the name of the dog
  * @age: The age of the dog
  * @owner: The owner of the dog
  *
  */

struct dog

{
	char *name;

	float age;

	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif /*DOG_H*/