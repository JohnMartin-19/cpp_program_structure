#include <iostream>
using namespace std;

int addition(int a, int b){
    int r = a+b;
    return r;
}

int main(){
    int z;
    ///we call the function here with its params
    z = addition(5,4);
    cout << "The total is: " << z ;
}