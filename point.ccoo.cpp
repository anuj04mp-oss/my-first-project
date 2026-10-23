#include <iostream>
using namespace std;

class number {
    int x;
public:
    number(int a) {
        x = a;
    }

    void operator()() {
        cout << "value = " << x << endl;
    }
};

int main() {
    number n(10);

    cout << "before increment" << endl;
    n();

    return 0;
}