#include <iostream>
using namespace std;
int main()
{

    int i = 1;
    int n = 4;
    while (i<=n)
    {   
        int j = 0;
        while (j<i)
        {
            cout << i+j << " ";
            j++;

        }
        cout << endl;
        i++;
    }
    
}