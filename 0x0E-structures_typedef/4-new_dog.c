#include"dog.h"
#include<stdlib.h>
/**
 * len - return length
 *
 * @x: input
 *
 * Return: len
*/
int len(char *x)
{
	int n;

	for (n = 0; x[n] != '\0'; n++)
		;
	return (n);
}
/**
 * copy - return copy of string
 *
 * @d: input
 * @s: input
 *
 * Return: d
*/
char *copy(char *d, char *s)
{
	int x = 0;

	while (s[x])
	{
		d[x] = s[x];
		x++;
	}
	d[x] = '\0';

	return (d);
}
/**
 * new_dog -  creates a new dog
 *
 * @name: new name
 * @age: new age
 * @owner: dog owner
 *
 * Return: nothing
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bob;

	if (!name || age < 0 || !owner)
		return (NULL);
	bob = (dog_t *)malloc(sizeof(dog_t));
	if (bob == NULL)
		return (NULL);

	bob->name = malloc(sizeof(char) * (len(name) + 1));
	if ((*bob).name == NULL)
	{
		free(bob);
		return (NULL);
	}
	bob->owner = malloc(sizeof(char) * (len(owner) + 1));
	if ((*bob).owner == NULL)
	{
		free(bob);
		free(bob->name);
		return (NULL);
	}
	bob->name = copy(bob->name, name);
	bob->age = age;
	bob->owner = copy(bob->owner, owner);

	return (bob);
}
