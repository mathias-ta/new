#ifndef _DOG_H_
#define _DOG_H_

typedef struct dog dog_t;

/**
 *dog - structure defines dog with name, age and owner
 *@name: member
 *@age: member
 *@owner: member
 */

struct dog {
char *name;
float age;
char *owner;
};

#endif
