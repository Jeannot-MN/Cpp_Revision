#include <iostream>

using namespace std;

int main(){
    int array [5] {1,2,3,4,5};

    cout << array[3] << endl;

    cin >> array[5];
    cout << array[5] << endl;

    /* for(int i=-20; i<=20; i++){
        cout << array[i] << endl;
    }
 */
    for(int i : array){
        cout << i << endl;
    }

    system("pause");
    return 0;
}