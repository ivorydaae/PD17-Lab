#include<iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    while(n != m) {
        cin >> n >> m;
    }
    cout << "Finish at " << n;
    return 0;
}
