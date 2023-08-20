#include <iostream>
using namespace std;
int main (){
  int n =4;
  int i =1;
  while (i<=n)
  {
    int j = 1;
    while (j<=i)
    {
        cout << " ";
        j++;
    }
    
    int k = 0;
    while (k<=n-i)
    {
        cout << i + k ;
        k++;
    }
    

    cout << endl;
    i++;
  }
  
}