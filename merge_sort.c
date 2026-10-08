#include<stdio.h>
void merge_sort(int arr[], int low, int high);
void merge(int arr[], int low, int mid, int high);

void merge_sort(int arr[], int low, int high) {
    int mid;
    if(low<high){
        mid=(low+high)/2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

void merge(int arr[], int low, int mid, int high) {
    int i=low,j=mid+1,k=0;
    int temp[high-low+1];

    while(i<=mid && j<=high) {
        if(arr[i]<arr[j]) {
            temp[k++]=arr[i++];
        }
        else {
            temp[k++]=arr[j++];
        }
    }

    while(i<=mid) {
        temp[k++]=arr[i++];
    }

    while(j<=high) {
        temp[k++]=arr[j++];
    }

    for(i=low, k=0; i<=high; i++, k++) {
        arr[i]=temp[k];
    }
}

int main(){
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);

    int arr[size];
    printf("Enter %d elements:\n",size);
    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }

    merge_sort(arr, 0, size-1);

    printf("Sorted Array:\n");
    for(int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
}