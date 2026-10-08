/*#include<stdio.h>

int main() {
    int i=4;
    int* j = &i;
    printf("The address of is  %p\n", &i);
    printf("The address of is  %p\n", j);
    printf("The value of is  %d\n", *(&i));
    printf("The value of i is %d\n", *j);
    return 0;
}

#include<stdio.h>

void ptr(int* pt) {
    printf("the address of i is %p\n", pt);
}

int main() {
    int i=5;
    int* pt=&i;
    printf("The address of i is %p \n", *pt);
    ptr(&i);
    return 0;
}

#include<stdio.h>

int main() {
    int i=5;
    int* ptr=&i;
    int** ptr1 = &ptr;
    printf("the value of i is %d", **ptr1);
    return 0;
}*/

#include <stdio.h>

int main(){
    int marks[] = {12, 34, 53, 66};

    int* ptr = &marks[0];
    // int* ptr = marks; // Same as int* ptr = &marks[0];

    for (int i = 0; i < 4; i++)
    {
        // printf("The marks at index %d is %d\n", i, marks[i]);
        printf("The marks at index %d is %d\n", i, *ptr);
        ptr++;
    }
 
    
    

    return 0;
}