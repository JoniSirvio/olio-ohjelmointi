#include <iostream>
using namespace std;

int retSum (int a, int b) {
    return a + b;
}

double calcDiv (int a, int b){
    if (a==0 || b==0) {
        cout << "Virhe: Et voi jakaa luvulla 0.\n" << endl;
        return 0.0;
    }
    else{
        return static_cast<double>(a) / b;
}
}

