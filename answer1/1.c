#include<stdio.h>
#include<conio.h>
int main()
{
int sum = 0 , n =0 ; 
n = 1000/3;
sum += 3*n*(n+1)/2 ;
n = 1000/5 ; 
n--;
sum += 5*n*(n+1)/2 ;
n = 1000/15;
sum -= 15*n*(n+1)/2;
printf("%d" , sum );


}