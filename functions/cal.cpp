#include <iostream>
#include <functional>

using namespace std;

int calEvents(function<int(int, int)> calculation, int x, int y) {
    return calculation(x, y);
}

int main() {
 int x;
 int y;
 
 cout << "Gime the first number: " << endl;
 cin >> x;
 
 cout << "Gime the second number: " << endl;
 cin >> y;
 
 function<int(int, int)> onAdd = [](int x, int y) {
    return x + y;
 };
 
 function<int(int, int)> onSub = [](int x, int y) {
    return x - y;
 };
 
 function<int(int, int)> onDiv = [](int x, int y) {
    return x / y;
 };
 
 function<int(int, int)> onMul = [](int x, int y) {
    return x * y;
 };
    
 char input;
 cout << "What operation do you want: " << endl;
 cin >> input;
 
 switch (input) {
    case '+':
        cout << x << "+" << y << "=" << calEvents(onAdd, x, y);
        break;
    case '-':
        cout << x << "-" << y << "=" << calEvents(onSub, x, y);
        break;
    case '/':
        cout << x << "/" << y << "=" << calEvents(onDiv, x, y);
        break;
    case '*':
        cout << x << "*" << y << "=" << calEvents(onMul, x, y);
        break;
    default:
        cout << "hi";
 }
 
 return 0;   
}
