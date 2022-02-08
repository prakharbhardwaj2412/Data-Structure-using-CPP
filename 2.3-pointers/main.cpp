/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int
main ()
{
  // POINTER TO SOME VARIABLE========================
  int a = 10;
  int *p;
  p = &a;
  cout << a << endl;
  printf ("using pointer %d \n", *p);
  printf ("address  %d %d", p, &a);


  // POINTER TO ARRAY================================
  int A[5] = { 2, 4, 6, 8, 10 };
  int *p;
  // p=&A[0]
  p = A;			//no need to give & with array because name of the array is the starting address of array.

  for (int i = 0; i < 5; i++)
    cout << "Using array:" << A[i] << "; Using pointer:" << p[i] << endl;


  // CREATING AN ARRAY IN HEAP USING POINTER========
  int *p;
  // p=(int*)malloc(5*sizeof(int)); // syntax in c
  p = new int[5];		// syntax in c++
  p[0] = 10;
  p[1] = 15;
  p[2] = 14;
  p[3] = 21;
  p[4] = 31;

  for (int i = 0; i < 5; i++)
    cout << p[i] << endl;
  // to delete the allocated memory
  free (p);			// syntax in c
  delete[]p;			// syntax in c++


  // POINTER FOR DIFFERENT DATA TYPE 

  int *p1;
  char *p2;
  float *p3;
  double *p4;
  struct Rectangle *p5;

  cout << sizeof (p1) << endl;
  cout << sizeof (p2) << endl;
  cout << sizeof (p3) << endl;
  cout << sizeof (p4) << endl;
  cout << sizeof (p5) << endl;


  return 0;
}
