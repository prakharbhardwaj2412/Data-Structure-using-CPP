#include <iostream>
using namespace std;

class Artihmetic
{
private:
    int a;
    int b;

public:
    Artihmetic(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    int add()
    {
        int c;
        c = a + b;
        return c;
    }
    int sub()
    {
        int c;
        c = a - b;
        return c;
    }
};

int main()
{
    Artihmetic ar1(10, 5), ar2(15, 7);
    cout << "Add :" << ar1.add() << endl;
    cout << "Sub :" << ar1.sub() << endl;
    return 0;
}