#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct dog
 * @name: pointer to char name's dog
 * @age: float age's dog
 * @owner: pointer to char owner's dog
 */
struct dog {
    char *name;
    float age;
    char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
