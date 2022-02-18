#include <iostream>

using namespace std;

// MENU DRIVEN PROGRAM FOR DIAGONAL MATRICX
/*
MENU
1. create
2. get
3. set
4. display
*/

int
main ()
{
  int *A, n, ch, x, i, j;
  cout << "Enter Dimension: ";
  cin >> n;
  A = new int[n];

  // menu

  do
    {
      // display menu'
      switch (ch)
	{
	case 1:
	  for (int i = 1; i <= n; i++)
	    cin >> A[i - 1];
	  break;
	case 2:
	  cout << "Enter indices: ";
	  cin >> i >> j;
	  if (i == j)
	    cout << A[i - 1];
	  else
	    cout << "0 ";
	  break;
	case 3:
	  cout << "Enter row, column, and element";
	  cin >> i >> j >> x;
	  if (i == j)
	    A[i - 1] = x;
	  break;
	case 4:
	  for (i = 1; i <= n; i++)
	    {
	      for (j = 1; j <= n; j++)
		{
		  if (i == j)
		    cout << A[i] << " ";
		  else
		    cout<<"0 ";
		}
	    }

	}
    } while(false);
  }
