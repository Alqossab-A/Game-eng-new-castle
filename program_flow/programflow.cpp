#include <iostream>

using namespace std;

int add(int x, int y);
int fac(int x);

int main() {
    int total = 0;

    int x;
    
    cout << "Enter numbers, will finish if sum of factorials exceeds 2000" << endl;

    while (total <= 2000) {
        cin >> x;
        total = add(fac(x), total);
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
    }

    return facSum;
};

int add(int x, int y) {
    return x + y;
};

