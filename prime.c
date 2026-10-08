#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool isPrime(int n) {
    if(n<=1) {
        return false;
    }
    else if(n==2){
        return true;
    }
    else{
        for(int i=2; i<= sqrt(n); i++) {
            if(n%i == 0) {
                return false;
            }
        }
        return true;
    }
}

int main() {
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    if( isPrime(n))
       printf("%d is a Prime number",n);
    else
       printf("%d is not a prime number",n);
}