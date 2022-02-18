#include <iostream>

using namespace std;

int
main ()
{
  char A[] = "How are       you";

  int i, vcount = 0, ccount = 0, wcount = 1;

  for (i = 0; A[i] != '\0'; i++)
    {
      // WORD COUNT
      if (A[i] == ' ' && A[i - 1] != ' ')
	wcount++;

      // VOWEL COUNT
      if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o'
	  || A[i] == 'u' || A[i] == 'A' || A[i] == 'E' || A[i] == 'I'
	  || A[i] == 'O' || A[i] == 'U')
	vcount++;

      // CONSONENT COUNT
      else if ((A[i] >= 65 && A[i] <= 90) || (A[i] >= 97 && A[i] <= 122))
	ccount++;
    }

  cout << A << endl;

  cout << "Word count: " << wcount << endl << "Vowel count: " << vcount <<
    endl << "Consonent count: " << ccount;

  return 0;
}
