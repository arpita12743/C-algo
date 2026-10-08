#include<stdio.h>
#include<math.h>

//1.no is positive or negative//
/*int main{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    if(num==0) {
        printf("num is 0\n");
    }
    else
        (num>0)?printf("Number is positive"):printf("Number is negative");
    return 0;
}*/

//2.no is even or odd//
/*int main() { 
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    (num%2==0)?printf("Even\n"):printf("Odd\n");
   return 0;
}*/
  
//3.sum of first n natural numbers//
/*int getSum();

int main() {
   int n,sum=0;
   printf("Value of n\n");
   scanf("%d",&n);

   printf("%d", getSum(sum,n));
   return 0;
}

int getSum(int sum, int n) {
    if(n==0)
        return sum;
    
    return n + getSum(sum,n-1);
}*/

//4.sum of no within a range//
/*int getSum();

int main() {
    int a,b;
    printf("Enter the Range\n");
    scanf("%d  %d",&a,&b);
    
    int sum= getSum(0,a,b);
    printf("%d", sum);
    return 0;
}

int getSum(int sum, int i, int b) {
    if(i>b) 
      return sum;
    
    return i+ getSum(sum, i+1, b);
}*/

//5. Greater between two no//
/*int main() {
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d  %d",&a,&b);

    if(a==b) {
        printf("They are equal");
    }
    else
        (a>b)?printf("%d is greater\n",a):printf("%d is greater\n",b);
  
 return 0;
}*/

//6. Leap year //
/*int main() {
    int i;
    printf("Enter Year:\n");
    scanf("%4d", &i);

    if(i%400==0 || i%4==0 && i%100!=0) {
        printf("Leap Year");
    }
    else {
        printf("Not a Leap Year");
    }
    return 0;
}*/

//7.Prime no in a range//
/*int checkPrime(int num) {
    if(num<2)
       return 0;
    else {
        for(int i=2;i<sqrt(num);i++) {
            if(num%i==0) 
               return 0;
        }
    }
    return 1;
}

int main() {
    int a,b;
    printf("Enter the start and end of range\n");
    scanf("%d %d",&a ,&b);

    for(int i=a;i<=b;i++) {
        if(checkPrime(i))
          printf("%d ",i);
    }

    return 0;
}*/

//8.Sum of digits//
