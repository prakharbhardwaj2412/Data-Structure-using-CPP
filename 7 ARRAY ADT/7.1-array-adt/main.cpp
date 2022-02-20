#include <stdio.h>
#include <stdlib.h>

// CREATING Structure for array
struct Array
{
  int *A;
  int size;
  int length;
};

// DISPLAY Array
void
Display (struct Array arr)
{
  int i;
  printf ("\nElements in the array are: ");
  for (int i = 0; i < arr.length; i++)
    {
      printf ("%d ", arr.A[i]);
    }
};

int
main ()
{
  struct Array arr;

  int n, i;

  printf ("Enter size of the array: ");
  scanf ("%d", &arr.size);
  arr.A = (int *) malloc (arr.size * sizeof (int));
  arr.length = 0;

  printf ("Enter numbers of mumber: ");
  scanf ("%d", &n);
  printf ("Enter all elements:\n");
  for (i = 0; i < n; i++)
    scanf ("%d", &arr.A[i]);
  arr.length = n;


  Display (arr);
  return 0;
}
