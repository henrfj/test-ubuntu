#ifndef HENRIK_H_	/*include guard*/
#define HENRIK_H_

#include <stdio.h>
void structTester();
void just_printing();
void length(int *arr);

void stringTester();


//malloc and stuff

struct node {
    int * next;
    char data;
};

struct LL {
    int * first;
    int * last;
}

#endif //HENRIK_H_
