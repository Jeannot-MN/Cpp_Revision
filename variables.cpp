#include <iostream>

using namespace std;

int main(){
    int x = 3; // C-like initialization
    int y (3); // Contructor initialization
    int z {3}; // C++11 list initialization syntax

    cout << x <<endl;
    cout << y <<endl;
    cout << z <<endl;

    system("pause");
    return 0;
}