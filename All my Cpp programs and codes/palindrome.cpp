#include <iostream>
#include <string>

using namespace std;
/////////////////////////////////////////////////////////////////////////
//The palindrome function is declared here in 2 different ways 
bool isPalindrome(string w){
	int size = w.size();
	for(int i = 0, j = size -1; i < size/2; i++, j--){
		if(w[i] != w[j]){
			return false;
		}
	}
	return true;
}

bool isPalindrome2(string w){
	int size = w.size();
	string reverse="";
	for(int i = size -1; i>=0; i--){
		reverse += w[i];
	}
	
	if(reverse == w)
	    return true;
	else
	    return false;
	
}
//////////////////////////////////////////////////////////////////////////////
//The fibonacci series using recursion
int fibonacci(int n){
	if (n == 1)
	    return 0;
	if (n == 2)
	    return 1;
	
	return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
	
	string word ;
	
	cout <<"Enter a word: ";
	cin >> word;
	
	if(isPalindrome(word) == true) // You can call any of the two functions declared above they give the same result
	    cout << "The word is a palindrome"<<endl;
	else
	    cout <<"The word is not a palindrome"<<endl;
	    
	int number;
	cout <<"How many terms do you want me to generate: ";
	cin >> number;
	
	for (int i=1; i<= number; i++){
		cout << fibonacci(i)<<" ";
	}
	system("pause");
	return 0;
}
