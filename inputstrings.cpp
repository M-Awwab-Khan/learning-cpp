#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    cout << "Enter your name and age: " << endl;
    getline(cin, name);
    cin >> age;

    cout << "Hello, " << name << " you are " << age << " years old." << endl;
    return 0;
}