#include <stdlib.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, namelen = 0, ownerlen = 0;
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	/* copy name to new dog struct*/
	while (name[namelen] != '\0')
		namelen++;

	namelen++; /* null terminator */

	new_dog->name = malloc(namelen * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < namelen; i++)
		new_dog->name[i] = name[i];

	new_dog->age = age;

	while (owner[ownerlen] != '\0')
		ownerlen++;
	ownerlen++;

	new_dog->owner = malloc(ownerlen * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < ownerlen; i++)
		new_dog->owner[i] = owner[i];

	return (new_dog);
}
