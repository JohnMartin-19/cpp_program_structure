#include <iostream>
using namespace std;

int subtraction(int a, int b){
    int r;
    r = a-b;
    return r;
}

int main(){
    int x=5, y=3, z;
    z = subtraction(7,3);
    cout << "tHE FIRST RESULT IS :" << z << '\n';
    cout << "The seconde result is: " << subtraction(7,2) << '\n';
    cout << "The third result is :" << subtraction(x,y) << '\n';
    z = 4+subtraction(x,y);
    cout << "The forth result is: " << z << '\n';
    return 0;
}