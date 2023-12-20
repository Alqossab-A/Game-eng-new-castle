#include <iostream>

using namespace std;

int main() {

    cout<< "what is your name? ";

    string name;
    cin >> name;

    cout << "Hello "  << name << "\n";

    int x;
    int y;

    cout << "What would you want X to be?";
    cin >> x;

    cout << "what would you like Y to be?";
    cin >> y;


    int a = x + y;



    cout << x << " + " << y << " = " << a;

    return 0;
}
