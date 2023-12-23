#include <iostream>

using namespace std;

int add(int x, int y);
int fac(int x);
bool value(int x);

int main() {
    int total = 0;

    int x;
    
    cout << "Enter numbers, will finish if sum of factorials exceeds 2000" << endl;

    while (total <= 2000) {
        cin >> x;
        value(x);
        total = add(fac(x), total);
        cout << "total: " << total << endl;
    }
    
    cout << "The total is " << total << endl;

    if (total > 3000) {
        cout << "you overshot by a lot!" << endl;
    } else {
        cout << "You just went over" << endl;
        cout << "only over by " << total - 2000 << endl;
    }

    return 0;
}

int fac(int x) {
    int facSum = 0;

    for (int count = x; count > 0; count--) {
        facSum = facSum + count;
        cout << "facSum " << facSum << ",";
    }

    return facSum;
};

int add(int x, int y) {
    return x + y;
};

bool value(int x) {
    if (x >= 0) {
        cout << "true" << endl;
        return true;
    } else {
        cout << "false" << endl;
        return false;
    }
};

