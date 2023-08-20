#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int n = 4;  
    cout << "Enter n";
   

    int i = 0;
    int ans = 0;
    while (n!=0)
    {
        int bit = n&1;
        ans = (bit*pow(10,i)) + ans;
        n>>1;
        i++;
    }
    cout << "The answer in binary is "<< ans << endl;
    
}