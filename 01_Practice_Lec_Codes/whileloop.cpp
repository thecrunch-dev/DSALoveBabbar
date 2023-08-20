#include <iostream>
using namespace std;
int main (){
    // Sum of even numbers between 1 to n.
    int n = 5;
    int sum = 0;
    int i =2;
      while (i<=n)
      {
        sum = sum + i;
        i= i+2;
      }
 cout << "sum of even numbers between 1 and n is:"<< sum << endl;
      
}