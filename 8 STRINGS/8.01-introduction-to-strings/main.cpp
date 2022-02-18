#include <stdio.h>
#include <iostream>


using namespace std;

int
main ()
{
  // character 
  char temp;
  temp = 'A';
  printf ("%c\n", temp);
  printf ("%d\n", temp);
  cout << temp << endl;

  // array of character

  //   1
  char x[5] = { 'A', 'B', 'C', 'D', 'E' };
  for (int i = 0; i < 5; i++)
    {
      printf ("%c %d ; ", x[i], x[i]);
    }
  cout << endl;

  //   2
  char y[] = { 'A', 'B', 'C', 'D', 'E' };
  for (int i = 0; i < 5; i++)
    {
      printf ("%c %d ; ", y[i], y[i]);
    }
  printf ("\n");

  //   3
  char z[5] = { 65, 66, 67, 68, 69 };
  for (int i = 0; i < 5; i++)
    {
      printf ("%c %d ; ", z[i], z[i]);
    }
  cout << endl;

  //   4
  char w[5] = { 'A', 'B' };
  for (int i = 0; i < 5; i++)
    {
      printf ("%c %d ; ", w[i], w[i]);
    }
  cout << endl;


  // STRINGS
  char name[10] = { 'J', 'o', 'h', 'n', '\0' };
  printf ("%s\n", name);

  char name2[] = { 'J', 'o', 'h', 'n', '\0' };
  printf ("%s\n", name2);

  char name3[] = "John";
  cout << name3 << endl;

  char name4[100];
  scanf ("%s", name4);
  cout << name4 << endl;

//   getline (cin, name4);
  // cin>>name4;
//   cout<<name4;




}
