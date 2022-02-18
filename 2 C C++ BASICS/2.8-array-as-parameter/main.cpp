#include <iostream>
using namespace std;

void
fun (int *A, int n)
{
  cout << sizeof (A) / sizeof (int) << endl;
  for (int i = 0; i < n; i++)
    cout << A[i] << " ";
  cout << endl;
  A[0] = 15;
};

// FUNCTION RETURNING AN ARRAY ;
int *
fun_returning_array (int size)
{
  int *p;
  p = new int[size];

  for (int i = 0; i < size; i++)
    p[i] = i + 1;

  return p;
};

int
main ()
{
   int A[] = {2, 4, 6, 8, 10};
   int n = sizeof(A)/sizeof(int);
   fun(A, n); 

   for (int x:A)
   cout<<x<<" ";

   cout<<sizeof(A)/sizeof(int)<<endl;

  int *ptr, sz = 7;
  ptr = fun_returning_array (sz);

  for (int i = 0; i < sz; i++)
    cout << ptr[i] << endl;

  return 0;
}
