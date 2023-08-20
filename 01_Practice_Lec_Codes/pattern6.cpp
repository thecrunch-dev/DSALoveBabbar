#include <iostream>
using namespace std;
int main (){
    int n = 4;
int i =1;
int count =1;
while (i<=n)    
{ 
  
  int k =1;
  while (k<=n-i+1)  
  {
    cout << "  ";
    k++;
  }
  

  int j = 1;
  while (j<=i)
  {
    cout << count <<" ";
    count++;
    j++;
  }
    i++;
    cout << endl;
}

}