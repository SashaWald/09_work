#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include <string.h>
#include <time.h>

int main(){
    srand(time(NULL));
    //testing print_struct
    struct person_age u;
    strncpy(u.name,"sasha",sizeof(u.name)-1);
    u.age=17;
    print_struct(u);
    printf("\n");
    
    //testing function to create struct
    char* name = "isaac";
    int age = rand()%64+10;
    struct person_age* u2 = new_person(name,age);
    print_struct(*u2);
    printf("\n");
    
    //testing function to modify struct
    modify_struct(u2,rand()%15);
    print_struct(*u2);
    return 0;
}