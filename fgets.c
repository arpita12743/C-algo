#include<stdio.h>
int main() {
    char colour[20];
    char noun[20];
    char celeb[50];

    printf("Enter colour: ");
    scanf("%s",colour);
    printf("Enter plural noun: ");
    scanf("%s",noun);

    while(getchar() != '\n');
    
    printf("Enter Celebrity name: ");
    fgets(celeb, sizeof(celeb), stdin);

    printf("Roses are %s\n",colour);
    printf("%s are blue\n",noun);
    printf("I love %s",celeb);

    return 0;
}