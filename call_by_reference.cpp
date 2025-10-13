#include<iostream>
using namespace std;

void duplicate(int& a, int& b, int& c){
    a*=2;
    b*=2;
    c*=2;

}

int main(){
    int x=3,y=4,z=5;
    duplicate(x,y,z);
    cout << "X=" << x << "Y=" << y << "Z=" << z ;
}