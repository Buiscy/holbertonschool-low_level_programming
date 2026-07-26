#ifndef dog_H
#define dog_H

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
void init_dog(struct dog *d, char *name, float age, char *owner);