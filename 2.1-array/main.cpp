#include <iostream>

using namespace std;

int
main ()
{
  int A[5];
  A[0] = 12;
  A[1] = 15;
  A[2] = 25;
  cout << sizeof (A) << endl;
  cout << A[1] << endl;
  printf ("%d\n", A[2]);

  int B[10] = { 2, 4, 6, 8, 10, 12, 14 };
  cout << sizeof (B) << endl;
  cout << B[8] << ", " << sizeof (B[8]) << endl;
  cout << "Element beyond size of array: " << B[11] << endl;

    //   ACCESSING ELEMENTS OF ARRAY
  // METHOD 1:
  cout << "Printing elements of array:" << endl;
  for (int i = 0; i < 10; i++)
    {
      cout << B[i] << endl;
    }
    // METHOD 2:
  cout << "Another way of printing elements of array:" << endl;
    for (int x:B)
    {
      cout << x << endl;
    }

  return 0;
}
