#include <iostream>

using namespace std;

struct Rectangle
{
  int lenght;
  int bredth;
  char x;
};

int
main ()
{
  struct Rectangle r1 = { 10, 5 };
  printf ("size of structure rectangle: %lu\n", sizeof (r1));

  cout << "lenght: " << r1.lenght << endl;
  cout << "bredth: " << r1.bredth << endl;

  r1.lenght = 12;
  r1.bredth = 7;

  cout << "lenght: " << r1.lenght << endl;
  cout << "bredth: " << r1.bredth << endl;

  return 0;
}
