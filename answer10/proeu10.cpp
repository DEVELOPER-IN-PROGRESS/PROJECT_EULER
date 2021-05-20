#include<iostream>
using namespace std ;
using std :: cin ; 
using std :: cout ;
int main()
{
  int n , sum = 0 , p , i ;
  cout<<"Enter a limit \n" ;
  cin >> n ; 
  bool prime[n+1]  = {};


   for( p = 2 ; p*p <=n ;p++)
    {
       if(prime[p]==false)
       {
         for(i = p*p ; i<=n ; i+=p)
            prime[p] = true ;
       }

    }


 for( p =2 ; p*p <= n ; p++)
   { if(!prime[p])
    sum+=p;
   }
   
    cout<<"The sum of all primes till " <<n<<" is " <<sum ; 


    getchar();
    return 0 ;
}
