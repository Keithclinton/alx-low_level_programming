#ifndef DOG_H
#define DOG_H


	/**
	 * dog_t- a struct dog's basic info
	 * @name: name of the struct dog
	 * @age: age of the struct dog
	 * @owner: Owner of the struct dog
	 * @Description: it describes the age name and owner of the struct dog
	 */
	dog_t
	{
		char *name;
		float age;
		char *owner;
	};


	/**
	 * dog_t - typedef for struct dog
	 */
	typedef struct dog dog_t;


	void init_dog(struct dog *d, char *name, float age, char *owner);
	void print_dog(struct dog *d);
	dog_t *new_dog(char *name, float age, char *owner);
	void free_dog(dog_t *d);
	char *_strcpy(char *dest, char *src);
	int _strlen(char *s);


	#endif



