#include <stdlib.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	char *sname;
	char *sowner;

	int count1;
	int count2;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(*dog));
	if (dog == NULL)
		return (NULL);

	dog->age = age;

	count1 = 0;
	while (name[count1] != '\0')
		count1++;
	
	count2 = 0;
	while (owner[count2] != '\0')
		count2++;

	sname = malloc((count1 + 1) * sizeof(char));
	if (sname == NULL)
	{
		free(dog);
		return (NULL);
	}

	sowner = malloc((count2 + 1) * sizeof(char));
	if (sowner == NULL)
	{
		free(sname);
		free(dog);
		return (NULL);
	}

	count1 = 0;
	while (name[count1] != '\0')
	{
		sname[count1] = name[count1];
		count1++;
	}
	sname[count1] = '\0';

	count2 = 0;
	while (owner[count2] != '\0')
	{
		sowner[count2] = owner[count2];
		count2++;
	}
	sowner[count2] = '\0';
	dog->name = sname;
	dog->owner = sowner;
	return (dog);
}
