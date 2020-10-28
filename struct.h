#ifndef STRUCT_H
#define STRUCT_H
struct person_age{char name[256]; int age;};
struct person_age * new_person(char *name, int age);
void print_struct(struct person_age u);
void modify_struct(struct person_age* u, int age_up);
#endif