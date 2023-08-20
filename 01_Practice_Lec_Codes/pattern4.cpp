#include <iostream>
using namespace std;
int main (){

   int n = 4;
   int i =1;
    while (i<=n)
    {  
         int p =1;
        while (p<=(n-i))
        {
            cout << " ";
            p++;
        }
        int j =1;
        while (j<=i)
        {
            cout << j << " ";
            j++;
        }
        int k =2;
        while ( k<=i){
            cout << k-1 << " ";
            k++;
        }
        cout << endl;
        i++;
    }
    

}