#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;


#define PI 3.1459

int main()
{
    int x = 3; // C-like initialization
    int y(3);  // Contructor initialization
    int z{3};  // C++11 list initialization syntax

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    /* char c;
    char16_t c16;
    char32_t c32;
    wchar_t lc;

    signed short int a; //16 bits
    signed short;

    signed int; //16 bits

    signed long int; //32 bits
    signed long;

    signed long long; //64 bits

    unsigned short int a;
    unsigned int;
    unsigned long int;
    unsigned long long int;

    float;
    double;
    long double;

    bool; */

    cout << "short: " << sizeof(short) << " bytes" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "long: " << sizeof(long) << " bytes" << endl;
    cout << "long long: " << sizeof(long long) << " bytes" << endl;
    cout << "float: " << sizeof(float) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;
    cout << "long double: " << sizeof(long double) << " bytes" << endl;
    cout << "char: " << sizeof(double) << " bytes" << endl;
    cout << "char16_t: " << sizeof(char16_t) << " bytes" << endl;
    cout << "char32_t: " << sizeof(char32_t) << " bytes" << endl;
    cout << "wchar_t: " << sizeof(wchar_t) << " bytes" << endl;
    cout << "bool: " << sizeof(bool) << " bytes" << endl;

    cout << "SHORT_MIN: " << SHRT_MIN << endl;
    cout << "SHORT_MAX: " << SHRT_MAX << endl;
    cout << "INT_MIN: " << INT_MIN << endl;
    cout << "INT_MAX: " << INT_MAX << endl;
    cout << "LONG_MIN: " << LONG_MIN << endl;
    cout << "LONG_MAX: " << LONG_MAX << endl;
    cout << "LONG_LONG_MIN: " << LLONG_MIN << endl;
    cout << "LONG_LONG_MAX: " << LLONG_MAX << endl;
    cout << "FLOAT_MIN: " << FLT_MIN << endl;
    cout << "FLOAT_MAX: " << FLT_MAX << endl;
    cout << "DOUBLE_MIN: " << DBL_MIN << endl;
    cout << "DOUBLE_MAX: " << DBL_MAX << endl;
    cout << "CHAR_MIN: " << CHAR_MIN << endl;
    cout << "CHAR_MAX: " << CHAR_MAX << endl;

    cout << PI << endl;

    system("pause");
    return 0;
}