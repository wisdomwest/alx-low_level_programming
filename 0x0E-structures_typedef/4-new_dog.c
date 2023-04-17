#include <stdlib.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	int namelen = 0;
	int ownerlen = 0;
	int i;
	char *namecpy, *ownercpy;
	dog_t *new_dog;

	while (name[namelen] != '\0')
	{
		namelen++;
	}
	while (owner[ownerlen] != '\0')
	{
		ownerlen++;
	}

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	namecpy = malloc(namelen);
	ownercpy = malloc(ownerlen);

	if (namecpy == NULL || ownercpy == NULL)
	{
		free(new_dog);
		free(namecpy);
		free(ownercpy);
		return (NULL);
	}
	for (i = 0; i < namelen; i++)
	{
		namecpy[i] = name[i];
	}
	for (i = 0; i < ownerlen; i++)
	{
		ownercpy[i] = owner[i];
	}
	new_dog->name = namecpy;
	new_dog->age = age;
	new_dog->owner = ownercpy;
	return (new_dog);
}
