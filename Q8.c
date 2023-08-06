//WAP to check whether a given number is a prime number or not.#
#include<stdio.h>
int main()
{
    int i,num,flag=0;
    printf("Enter a number:\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {

    if(num%i==0)
    {
     flag++;
    }


    }
    if(flag==2)
        printf("number is prime:\n");
    else
        printf("number is not prime:\n");
}
