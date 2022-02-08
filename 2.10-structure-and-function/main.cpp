#include <iostream>
using namespace std;

struct Rectangle
{
  int length, bredth;
};

void
initialize (struct Rectangle *r, int l, int b)
{
  r->length = l;
  r->bredth = b;
}

int
area (struct Rectangle r)
{
  return r.length * r.bredth;
};

int
perimeter (Rectangle r)
{
  return 2 * (r.length + r.bredth);
};

int
main ()
{
  Rectangle r = { 0, 0 };
  int l, b;
  printf ("Enter length and bredth:\n");
  cin >> l >> b;

  initialize (&r, l, b);
  int a = area (r);
  int peri = perimeter (r);

  printf ("Area=%d\nPerimeter=%d\n", a, peri);
}

