#include<stdio.h>
#include<conio.h>
int main()
{
  long int  sum = 2 ;
 int  a = 0 , b = 2  ,  n = 0 ; 
  n = a + 4*b ;
  while(n < 4000000)
 {
  
   sum += n ;   
  n = a + 4*b ;  
   a =  b   ; 
   b =   n ; 
  }
printf("sum = %d" ,sum  - 8 ); 
getch();

}
 
