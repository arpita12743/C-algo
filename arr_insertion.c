 #include<stdio.h>

 void display(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
 }

int insert(int arr[], int size) {
    int number, index;
    printf("Enter the index and the number you want to insert\n");
    scanf("%d %d", &index, &number);
    if(size>=100) {
        return -1;
    }
    for(int i=size-1; i>=index; i--) {
        arr[i+1]=arr[i];
    }
    arr[index]= number;
    return 1;
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
    c =  insert(arr, n);
    if(c = 1) {
        n++;
        display(arr, n);
    }
    else {
        printf("Insertion failed");
    }
    
    return 0;
 }