#include<stdio.h>

int main() {
    int i=1,n,product=1;
    printf("ENter a number:\n");
    scanf("%d", &n);

    do {
        product=product*i;
        i++;
    }
    while(i<=n);

    printf("Product is: %d", product);

    return 0;
}