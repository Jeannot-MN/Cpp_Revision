#include<iostream>
#include<string>

using namespace std;

int main()
{
	string from_file = "WHat are you doing. what is your name. I am the King of mabenas and i am the one and only one mabena what !!!.";
	string searched;
	cout << "Enter the word you are searching for:";
	cin >> searched;
	
	string copy = from_file;
	
	int number_of_words=0;
	int number_of_sentence=0;
	int number_of_word_searched=0;
	
	int pos = copy.find('.');
	
	//COUNT SENTENCES
	while(pos!=-1){
		number_of_sentence++;
		copy.erase(0,pos+1);
		pos = copy.find('.');
	}
	
	cout <<"The file has "<<number_of_sentence<<"sentences"<<endl;
	
	//COUNT WORDS
	copy = from_file;
	pos = copy.find(' ');
	
	while(pos!=-1){
		number_of_words++;
		copy.erase(0,pos+1);
		pos = copy.find(' ');
	}
	cout <<"The file has "<<number_of_words<<"words"<<endl;
	
	
	//COUNT SEARCHED WORD
	copy =from_file;
	pos = copy.find(searched);
	
	while(pos!=-1){
		number_of_word_searched++;
		copy.erase(0,pos+1);
		pos = copy.find(searched);
	}
	
	cout<<"The word '"<<searched<<"' appears "<<number_of_word_searched <<"time(s)"<<endl;
	system("pause");
	return 0;
}
