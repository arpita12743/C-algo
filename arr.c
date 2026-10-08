/*#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = &a[0];

    printf("The value at address %u is %d", ptr+2,*(ptr+2));

    return 0;  
    
    
}

#include<stdio.h>

int main() {
    int a[10];

    printf("The Array is:\n");

    for(int i=0;i<10;i++) {
        a[i]=5*(i+1);
        printf("%d\t", a[i]);
    }
    return 0;
}

#include<stdio.h>

int main() {
    int a[10];
    int n;
    printf("Enter a number:");
    scanf("\t%d\n",&n);

    printf("The Array is:\n");

    for(int i=0;i<10;i++) {
        a[i]=n*(i+1);
    }
    
    for(int i=0;i<10;i++) {
        printf("%d\t",a[i]);
    }
    return 0;
}

#include<stdio.h>

int positive(int ar[], int n) {
    int c=0;
    for(int i=0;i<n;i++){
       if(ar[i]>0) {
          c++;
       }
    }
    return c;
}

int main() {
    int n;
    printf("size of array :\n");
    scanf("%d",&n);
    int ar[n];
    printf("Enter elements in array\n");
    for(int i=0;i<n;i++) {
        scanf("%d",&ar[i]);
    }


    printf("No of positive numbers is %d",positive(ar,n));
    return 0;
}

#include<stdio.h>

int main() {
    int n1,n2,n3;
    printf("Enter three numbers:\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    int ar[3][10];
    int mul[]={n1,n2,n3};
    for(int i=0;i<3;i++) {
        for(int j=0;j<10;j++) {
            ar[i][j]= mul[i] * (j+1);
        }
    }

    for(int i=0;i<3;i++) {
        for(int j=0;j<10;j++) {
            printf("the value of ar[%d][%d] is %d\n",mul[i],j+1, ar[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/

#include <stdio.h>

void printArray(int a[], int n){
    for (int i = 0; i < n; i++)
    {
       printf("%d ", a[i]);
    }
    printf("\n");
}

void reverse(int arr[], int n){
   /* for  i from 0 to n/2
    arr[i] arr[n-i-1] 
    */
   int temp;
   for (int i = 0; i < n/2; i++)
   {
    temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
   }
   
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6 };
    printArray(arr, 6);
    reverse(arr, 6);
    printArray(arr, 6);
    return 0;
}
