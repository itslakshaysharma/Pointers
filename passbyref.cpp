#include <iostream>
using namespace std;
//pass by refrence using pointers
int increment(int *aptr){
*aptr = *aptr+1;
cout<<"function "<<*aptr<<endl;
}
int main(){
    int a=10;
    increment(&a);
    cout<<"Main "<<a<<endl;

}
