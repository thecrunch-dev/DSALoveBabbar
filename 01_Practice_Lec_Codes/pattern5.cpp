#include <iostream>
using namespace std;
int main (){
int n = 5;
int i = 0;
while(i<n){

int j =1;
 while (j<=n-i)
 {
   cout << j << " ";
   j++;
 }
  
  int k = 1;
  while (k<=i)
  {
    cout << "* *" << " ";
    k++;
  }
   int l = 0;
  while (l<n-i)
  {
    cout << (n-i)-l << " ";
    l++;
  }

 i++;
 cout << endl;

}




}