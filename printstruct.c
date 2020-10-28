#include "struct.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_struct(struct person_age u){
    printf("name: %s\nage: %d\n",u.name,u.age);
}

struct person_age * new_person(char *name, int age){
    struct person_age *np;
    np = malloc(sizeof(struct person_age));
    strncpy(np->name,name,sizeof(np->name)-1);
    np->age = age;
    return np;
}

void modify_struct(struct person_age* u, int age_up){
    int previous_age = u->age;
    u->age = u->age + age_up;
    int current_age = u->age;
    printf("congratulations on turning %d!\n",u->age);
    if (current_age >= 18 && previous_age < 18){
        printf("you're now over 18! go vote!\n");
    }
    if (current_age >= 35 && previous_age < 35){
        printf("you're now over 35! have you thought about running for president?\n");
    }
    if (current_age >= 65 && previous_age < 65){
        printf("you're now a senior citizen! enjoy your reduced MTA fare!\n");
    }
}