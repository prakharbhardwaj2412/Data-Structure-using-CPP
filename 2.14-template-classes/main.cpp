#include <iostream>
using namespace std;

template <class T>
class Arithmetic
{
private:
    T a;
    T b;

public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
};


template <class T>
T Arithmetic<T> ::add()
{
    T c;
    c = a + b;
    return c;
};

template <class T>
T Arithmetic<T>::sub()
{
    T c;
    c = a - b;
    return c;
};

int main()
{
    Arithmetic<int> ar1(10, 5);
    cout << "Add :" << ar1.add() << endl;
    cout << "Sub :" << ar1.sub() << endl;
    Arithmetic<float> ar2(1.7, 0.5);
    cout << "Add :" << ar2.add() << endl;
    cout << "Sub :" << ar2.sub() << endl;
    return 0;
}