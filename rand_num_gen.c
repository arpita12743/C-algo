#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number;
    srand(time(0));
    //rand() % (max - min + 1) gives a number in the range [0, max - min].
    // Adding min shifts it to [min, max], so in this case, [1, 100]
    number = rand()%100 + 1; // Generates a random number between 1 and 100
    printf("The number is %d", number); 
    return 0;
}