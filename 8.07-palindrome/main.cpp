#include <iostream>

using namespace std;

int
main ()
{
  char A[] = "mom";
  int i = 0, j = 0, flag = 0;

  for (j; A[j] != '\0'; j++)
    {
    }
  j -= 1;

  for (i, j; i < j; i++, j--)
    {
      if (A[i] != A[j])
	{
	  flag = 1;
	  break;
	}
    }
  if (flag)
    cout << "Not a palindrome";
  else
    cout << "Palindrome";
  return 0;
}
