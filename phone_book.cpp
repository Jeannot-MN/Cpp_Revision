#include <iostream>
#include<string>

using namespace std;

const int PHONE_BOOK_SIZE = 20;

struct Phone_book {
    int id;
    string name;
    string surname;
    string phone;
};

void add(Phone_book pb[], int index) {
    int id;
    string name, surname, phone;

    cout << "Enter id: ";
    cin >> id;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your surname: ";
    cin >> surname;

    cout << "Enter your phone number: ";
    cin >> phone;

    Phone_book new_phone_book = {id, name, surname, phone};

    pb[index] = new_phone_book;

    cout << "Person added " << endl;
}

void list_phone_book(Phone_book pb[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "==================== Person " << i + 1 << "======================" << endl;
        cout << "ID: " << pb[i].id << endl;
        cout << "Name: " << pb[i].name << endl;
        cout << "Surname: " << pb[i].surname << endl;
        cout << "Phone: " << pb[i].phone << endl;
        cout << endl;
        cout << endl;
    }
};

void delete_num(Phone_book pb[], int size) {
    string name;
    cout << "Enter the name of the person to delete: ";
    cin >> name;

    int index;
    for (int i = 0; i < size; i++) {
        if (pb[i].name == name)
            index = i;
    }

    for (int i = index; i < size; i++) {
        pb[i] = pb[i + 1];
    }
}

void search(Phone_book pb[], int size) {
    string searchString;
    cout << "Type your search: ";
    cin >> searchString;

    for (int i = 0; i < size; i++) {
        if (to_string(pb[i].id).find(searchString) != -1
            || pb[i].name.find(searchString) != -1
            || pb[i].surname.find(searchString) != -1
            || pb[i].phone.find(searchString) != -1){
            cout << "ID: " << pb[i].id << endl;
            cout << "Name: " << pb[i].name << endl;
            cout << "Surname: " << pb[i].surname << endl;
            cout << "Phone: " << pb[i].phone << endl;
            cout << endl;
            cout << endl;
        }
    }
}

int main() {
    Phone_book pb[PHONE_BOOK_SIZE];
    int current_phone_size = 0;

    int choice;

    do {
        cout << "1. Add a person to phone_book" << endl;
        cout << "2. Delete a person from phone_book" << endl;
        cout << "3. List date in the phonebook " << endl;
        cout << "4. Search for a record " << endl << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        {
            switch (choice) {
                case 1:
                    add(pb, current_phone_size);
                    current_phone_size++;
                    break;
                case 2:
                    delete_num(pb, current_phone_size);
                    current_phone_size--;
                    break;
                case 3:
                    list_phone_book(pb, current_phone_size);
                    break;
                case 4:
                    search(pb, current_phone_size);
                    break;
            }
        }


    } while (choice < 5);


    return 0;
}


