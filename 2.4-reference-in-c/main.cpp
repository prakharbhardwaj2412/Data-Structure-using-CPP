#include <iostream>

using namespace std;

int main () 
{
    int a=10;
    int &r=a;
    cout<<a<<endl<<r<<endl;
    
    r=25;
    
    cout<<"Updating value through reference\n";
    cout<<a<<endl<<r<<endl;
    
    int b=30;
    r=b;
    cout<<a<<endl<<r<<endl;
    
}