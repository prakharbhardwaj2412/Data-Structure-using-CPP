#include <iostream>

using namespace std;

int main()
{
    char A[]="finding";
    for (int i=0; A[i]!='\0'; i++)
    {
        int count=0;
        for (int j=i+1; A[j]!='\0'; j++)
        {
            if (A[i] == A[j]) count++;
        }
        
        if(count)
        {
            cout<<A[i]<<"-"<<count<<endl;
        }
    }

    return 0;
}