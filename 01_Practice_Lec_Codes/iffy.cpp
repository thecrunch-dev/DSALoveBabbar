#include <iostream>
using namespace std;

int main(){
    int A , B;

    cout << "Enter A and B" << endl ;
    cin >> A;

    if(A>B){
        cout << "A is greater than B";
    }

   else if(B>A){
        cout << "B is greater than A";
    }

    else{
        cout << " A is equal to B";
    }

}