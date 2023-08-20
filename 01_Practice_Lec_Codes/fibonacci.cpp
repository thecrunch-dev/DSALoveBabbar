#include <iostream>
using namespace std;
int main (){
 int n = 8;
 int fib1 = 0;
 int fib2 = 1;

 for (int i = 0; i <=n; i++)
 { 
    int temp = fib2;
    cout << fib1 << " ";
    fib2 = fib1 + fib2; 
    fib1 = temp;
 }
 
}