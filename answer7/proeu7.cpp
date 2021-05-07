#include<iostream>
#include<stdlib.h>
using namespace std ; 
using std::cin;
using  std::cout ; 
int main()
{
system("cls");
    int n = 100000000;
    cout << "Following are the prime numbers smaller "
         << " than or equal to " << n << endl;

bool a[n] = {1};
 
cout<<a[1]<<endl;
cout<<"\nHello world";

 for (int p = 2; p * p <= n; p++)
    {
       
        if (a[p] == true)
        {
           
            for (int i = p * p; i <= n; i += p)
                a[i] = false;
        }
    }
 
    
    for (int p = 2; p <= n; p++)
        if (a[p])
            cout << p << " ";

return 0 ;

}

