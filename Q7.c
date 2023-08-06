//WAP to count digits in a given number.
#include<stdio.h>
int main()
{   long long int n;
    int count=0;
    printf("Enter an integer:\n");
    scanf("%lld",&n);
    do{
       n=n/10;
       count=++count;
      }while(n!=0);
      printf("Number of digits =%d\n",count);
      return 0;

}
