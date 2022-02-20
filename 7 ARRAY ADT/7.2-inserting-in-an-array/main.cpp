#include <stdio.h>

struct Array
{
  int A[10];
  int size;
  int length;
};

// DISPLAY Array
void
Display (struct Array arr)
{
  printf ("\nElements in the array are: ");
  for (int i = 0; i < arr.length; i++)
    printf ("%d ", arr.A[i]);
  printf ("\nSize of Array: %d", arr.size);
  printf ("\nLength of Array: %d", arr.length);
};

// APPEND Array
void
Append (struct Array *arr, int x)
{
  if (arr->length < arr->size)
    arr->A[arr->length++] = x;
};

// INSERTING INTO Array
void
Insert (struct Array *arr, int index, int x)
{
  if (index >= 0 && index < arr->length && arr->length < arr->size)
    {
      for (int i = arr->length; i > index; i--)
	arr->A[i] = arr->A[i - 1];
      arr->A[index] = x;
      arr->length++;
    }
}


int
main ()
{
  struct Array arr = { {2, 3, 4, 5, 6}, 10, 5 };
  Append (&arr, 10);
  Insert (&arr, 5, 8);
  Append (&arr, 12);
  Insert (&arr, 0, -1);
  Insert (&arr, 1, 1);
  Insert (&arr, 1, 0);
  Display (arr);
  return 0;
}
