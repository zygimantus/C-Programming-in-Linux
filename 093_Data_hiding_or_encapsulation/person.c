#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "person.h"

typedef struct sPerson_t
{
	char firstname[32];
	char lastname[32];
	int age;
} sPerson;


pPerson AddName(char *firstname, char *lastname, int age)
{
	sPerson *c = (sPerson *) malloc(sizeof(sPerson));
	pPerson per;
	strcpy(c->firstname, firstname);
	strcpy(c->lastname, lastname);

	c->age = age;
	per = (pPerson) c;
	return per;
}

void PrintName(pPerson pers)
{
	sPerson *c = (sPerson *) pers;
	printf("Lastname: %s\n", c->lastname);
	printf("Firstname: %s\n", c->firstname);
	printf("Age      : %d\n", c->age);
}
