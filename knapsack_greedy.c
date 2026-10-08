#include<stdio.h>

float p[10], w[10], r[10], x[10];

void knapsack(float m, int n){
    float u;
    int i;
    u=m;
    for(i=0; i<n; i++){
        x[i]=0.0;
    }
    for(i=0;i<n;i++){
        if(w[i]>u){
            break;
        }
        x[i]=1.0;
        u=u-w[i];
    }
    if(i<=n){
        x[i]=u/w[i];
    }
}

int main(){
    int i,n,j;
    float m, temp, temp1, temp2;
    float tp=0.0;
    printf("Enter the no.of elements:\n");
    scanf("%d",&n);
    printf("Enter the maximum capacity: ");
    scanf("%f",&m);
    printf("Enter the weights of the elements:\n");
    for(i=0;i<n;i++){
        scanf("%f",&w[i]);
    }
    printf("Enter the profits of the element:\n");
    for(i=0;i<n;i++){
        scanf("%f",&p[i]);
    }
    for(i=0;i<n;i++){
        r[i]=p[i]/w[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(r[j]<r[j+1]){
                temp=r[j];
                r[j]=r[j+1];
                r[j+1]=temp;
                temp1=w[j];
                w[j]=w[j+1];
                w[j+1]=temp1;
                temp2=p[j];
                p[j]=p[j+1];
                p[j+1]=temp2;
            }
        }
    }

    knapsack(m,n);

    for(i=0;i<n;i++){
        tp=tp+(x[i]*p[i]);
    }
    printf("\n Total profit is: %f",tp);
}