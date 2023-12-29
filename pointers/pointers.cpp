#include <iostream>

using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10;
    int y = 5;

    cout << "value of x: " << x << " value of y: " << y << endl;

    swap(&x, &y);

    cout << "swapped: " << x << " " << y << endl;

    /*
    int a = 100;

    cout << "Value in memory location a is " << a << endl;

    cout << "Adderss of (the reference to) memory location a is " << &a << endl;

    int* b = &a;

    cout << "Value in memory location pointed by b is " << *b << endl;


    cout << "Value in memory location b is " << b << endl;
    cout << b << " should be the same as the memory location for a: " << &a << endl;
    cout << "b is actually at memory location " << &b << endl;

    int** c;

    c = &b;
    cout << "c is now pointing to what b points to: " << **c << endl;

    cout << "c points to:  " << *c << endl;

    cout << "c actually holds the value: " << c << endl;
    cout << c << " is the same value as b's memory location: " << &b << endl;
    cout << "c is actually at memory location " << &c << endl;

    cout << "c is eventually retrieving what is in memory location " << **&c << endl;
    cout << "the value of a is in memory location " << &a << endl;

    int x;
    cout << "Type in a number to finish" << endl;
    cin >> x;
    */

    return 0;
}
