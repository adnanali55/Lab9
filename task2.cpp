#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    while (sum <= 100) {
        cout << "Enter an integer: ";
        cin >> num;

        sum = sum + num;

        cout << "Current sum = " << sum << endl;
    }

    return 0;
}
