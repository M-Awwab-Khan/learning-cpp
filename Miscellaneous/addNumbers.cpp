#include <iostream>
using namespace std;

int printAddition(int x, int y) {
    int sum = x + y;

    cout << x << " + " << y << " = " << sum << endl;
    return 0;
}

int main() {

    int x, y;

    cout << "Enter two numbers: " << endl;
    cin >> x >> y;

    printAddition(x, y);
    
    return 0;
}