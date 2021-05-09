#include<iostream>
#include<cmath>
using std:: cout ; 
using std :: cin  ; 
using namespace std ;
int main ()
{
   int a   , sum = 0 ;
   cout<<"Enter limit\n" ;
   cin >>a;
   cout<<"Sum Difference ="<<pow( (a)*(a+1)/2 , 2) - a*(a+1)*(2*a+1)/6 ;
   
    return 0 ;
}