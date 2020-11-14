#ifndef ___PERSON__H__
#define ___PERSON__H__

struct Person;
typedef struct Person *pPerson;

pPerson AddName(char *firstname, char *lastname, int age);
void PrintName(pPerson);
void ChangeName(pPerson, char *new_firstname);


#endif
