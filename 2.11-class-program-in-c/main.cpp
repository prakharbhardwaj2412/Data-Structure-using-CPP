#include <iostream>
using namespace std;

class Rectangle
{
public:
  int length, bredth;

  void initialize(int l, int b)
  {
    length = l;
    bredth = b;
  };
  int area(int l, int b)
  {
    return length * bredth;
  };
  int perimeter(int l, int b)
  {
    return 2 * (length + bredth);
  };
};

int main()
{
  Rectangle r;
  int l, b;
  printf("Enter length and bredth:\n");
  cin >> l >> b;

  r.initialize(l, b);
  int a = r.area(l, b);
  int peri = r.perimeter(l, b);

  printf("Area=%d\nPerimeter=%d\n", a, peri);
}
