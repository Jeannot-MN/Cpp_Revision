#include <iostream>
#include<vector>

using namespace std;

int main(){
    vector <int> vect {1,2,3,4,5};

    for(int i: vect){
        cout << i <<endl;
    }

    cout << vect.at(0) << endl;

    vect.push_back(10);
    cout << vect.at(5) << endl;

    system("pause");
}