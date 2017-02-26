#include<iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    if(x+y == z) {
        cout << "A";   
    }
    if(x+z == y) {
        cout << "B";
    }
    if(y+z == x) {
        cout << "C";
    }
    if(x+y != z && x+z != y && y+z != x) {
        cout << "No";
    }
    return 0;
}
