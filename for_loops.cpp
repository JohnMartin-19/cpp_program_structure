#include <iostream>
using namespace std;


int main(){
    int n = 10; //when we declare and init the variable we do not need to repeat the n in the for loop.
    for(; n>0; n--){
        cout << n << '\n';
    }
    cout << "Blastoff!!";
}