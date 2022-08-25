#include <iostream>

using namespace std;

int sum(int limit){
    int array[5], sum =0;

    for(int i=0; i< limit; i++) array[i] = i + 1;

    for(int i=0; i < limit; i++) sum += array[i];

    return sum;
}

int main(){

    int limit;

    cout << "Enter your number: ";
    cin >> limit;

    while(limit > 0){
        cout << "Sum of number from 0 to "<< limit <<" is " << sum(limit) << endl;
        cout << "Enter your number: ";
        cin >> limit;
    }

    system("pause");
    return 0;
}
