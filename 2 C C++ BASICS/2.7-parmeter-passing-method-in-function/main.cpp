#include <iostream>
using namespace std;

int add(int a, int b)
{
    a++;
    cout<<a<<endl;
    // int sum = a+b;
    return 0;
};

void swap (int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
};

void swap_by_reference (int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    
    // PASS BY VALUE
    int num1=10, num2=15, sum;
    sum = add(num1, num2);
    // cout<<sum;
    cout<< num1;
    
    // PASS BY ADDRESS
    int num3=10, num4=15;
    swap(&num3, &num4);
    cout<<"First number: "<<num3<<endl;
    cout<<"Second number: "<<num4<<endl;
    
    // PASS BY REFERENCE 
    int num5=10, num6=15;
    swap_by_reference(num5, num6);
    cout<<"First number: "<<num5<<endl;
    cout<<"Second number: "<<num6<<endl;
    
    return 0;
}