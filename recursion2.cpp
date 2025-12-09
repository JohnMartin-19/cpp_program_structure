#include <iostream>
using namespace std;

int countdown(int n){
    if(n>0){
        cout << n << '\n';
        return countdown(n-1);
    } else {
        return 0;
    }
}

int main(){
    cout<< countdown(10) << '\n';
}