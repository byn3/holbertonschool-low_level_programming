#ifndef WOOFWOOF_BOW_WOW_SAYS_LIKE_YOU_AND_SHORTIE_LIKE_MINE
#define WOOFWOOF_BOW_WOW_SAYS_LIKE_YOU_AND_SHORTIE_LIKE_MINE
/**
* struct dog - a structure describing the doggo or pupperino
* @name: obviously the doge nombre. perro
* @age: cuanto anos tienen.
* @owner: dueno de sclavos, dominar.
*
* Description: attributes of a doggo
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
* struct dog_t - a new dog structure
* @name: obviously the doge nombre. perro
* @age: cuanto anos tienen.
* @owner: dueno de sclavos, dominar.
*
* Description: attributes of a doggo
*/
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;
void free_dog(dog_t *d);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
