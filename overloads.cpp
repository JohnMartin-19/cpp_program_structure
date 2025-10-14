//////Allows functions to share the same function name but they should have different parameter types.or they take diffrent number of params
#include <iostream>
using namespace std;

int operate(int a, int b){
    return a*b;
}

double operate(double a, double b){
    return a/b;
}


int main(){
    int a = 5;
    int b = 6;
    double y = 4.0;
    double z = 5.0;

    cout << operate(a,b) << '\n';
    cout << operate(y,z) << '\n';
}