#include<iostream>
using namespace std;

int main() {
    int x, y, z;
    bool printed = false;
    cin >> x >> y >> z;
    if(x+y == z) {
        cout << "A";   
        printed = true;
    }
    if(x+z == y) {
        cout << "B";
        printed = true;
    }
    if(y+z == x) {
        cout << "C";
        printed = true;
    }
    if(printed == false) {
        cout << "No";
    }
    return 0;
}
