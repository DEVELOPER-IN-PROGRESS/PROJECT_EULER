#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
int main()
{
 int n , sum = 0 ;
 printf("enter a limit"); 
 scanf("%d" , &n);
 bool prime[n] ;  

 prime[0] = prime[1] = false ;
 int p = 2 ;


 printf("Sum of all primes under %d is \t" , n) ;

for( p =2; p*p <= n ; p++)
{
       if( prime[p] == false)
       { 
           for(int i = p*p ; i<= n;i+=p)
           { 
               prime[i] = true ;
           }
       }
}

  for (int p = 2; p <= n; p++)
      {  
        if (!prime[p]){
         sum += p;
        }
      }

  printf("%d\n" , sum);

    getch();
    return  0 ; 
}