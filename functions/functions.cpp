#include <iostream>
#include <functional>

using namespace std;

void add(int x, int y);

int minus(int x, int y);

int processEvents(function<int(int, int)> someEvent, int x, int y) {
    return someEvent(x, y);
}

double quotient(double x, int y);

int main() {
    function<int(int, int)> onAddEvent = [](int x, int y) {
        return x + y;
    };
    
    function<int(int, int)> onMinusEvent = [](int x, int y) {
        return x - y;
    };
    
    cout << "add: " << processEvents(onAddEvent, 69, 69) << endl;
    cout << "subtract: " << processEvents(onMinusEvent, 69, 69) << endl;
    
    int a, b, c, exit;

    /*
    cout << "Please type in a number" << endl;
    cin >> a;
 
    cout << "Please type in another number" << endl;
    cin >> b;

    c = add(a, b);

    cout << a << " + " << b << " = " << c << endl;
    cout << a << " + " << b << " = " << add(a, b) << endl;
    */
    add(a, b);
    quotient(5, 3);

    cout << "enter another number to exit" << endl;

    cin >> exit;

    return 0;
}

int minus(int x, int y) {
    return x - y;
}

void add(int x, int y) {
    int answer = x + y;
    cout << "equal: " << answer << endl;
}

double quotient(double x, int y) {
    double answer = x / y;
    cout << "quotient: " << answer << endl;
}
