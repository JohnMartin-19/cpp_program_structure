#include <iostream>
using namespace std;

int factorial(int k){
    if(k>1){
        return k * factorial(k-1);
    } else{
        return 1;
    }
}

int main(){
    cout << factorial(10) << '\n';
}
