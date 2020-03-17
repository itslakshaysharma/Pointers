#include <iostream>
using namespace std;
int main() {
    //pointer
    int x=10;
    int *xptr=&x;
    cout<<&x<<endl;
    cout<<xptr<<endl;
    char ch='A';
    char *chptr=&ch;
    cout<<(void *)&ch<<endl;
    cout<<(void *)chptr<<endl;
    //Derefrence operatot(*)
    cout<<"Derefrence "<<*xptr<<endl;
    cout<<&x<<endl;//address of x
    cout<<xptr<<endl;// value store in pointer of x= address of x
    cout<<*(&x)<<endl;// value store at address &x or xptr because xptr=&x. which is 10;
    cout<<*xptr<<endl;//""
    cout<<*(&xptr)<<endl;// value store at address of xptr= address of x.
    cout<<&(*xptr)<<endl; // *xptr=x so the value of given code is the adress of x.


}
