#include <iostream>
using namespace std;
int factorial(int num)
{
    int fact=1;
    for(int i=1;i<=num;++i)
    {
     fact = fact*i;
    }
    return fact;
    
}
int main() {
int n,r;
cin>>n>>r;
int nfact= factorial(n);
int rfact= factorial(r);
int nrfact= factorial(n-r);
int fact =nfact/(rfact*nrfact);
cout<<fact;
}
