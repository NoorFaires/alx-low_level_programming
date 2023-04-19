#ifndef _dog_h_
#define _dog_h_

/**
 * struct dog - a dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: struct for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _dog_h_ */
