#include<stdio.h>

void display(int arr[], int n) {
   for(int i=0; i<n; i++) {
       printf("%d\t", arr[i]);
   }
   printf("\n");
}

void deleteElement(int arr[], int n) {
   int index;
   printf("Enter the index to delete\n");
   scanf("%d", &index);
   for(int i=index; i<n-1; i++) {
       arr[i]=arr[i+1];
   }
}

int main() {
   int arr[100];
   int index, number, n, c;
   
   printf("Enter the no. of elements in array\n");
   scanf("%d",&n);

   printf("Enter %d elements in the array\n", n);
   for(int i=0;i<n;i++) {
       scanf("%d" ,&arr[i]);
   }

   display(arr, n);
   deleteElement(arr, n);
   n-=1;
   display(arr, n);
   
   return 0;
}