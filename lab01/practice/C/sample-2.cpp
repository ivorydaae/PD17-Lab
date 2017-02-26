#include<iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    while(n % m > 0) {
        int tmp = n;
        n = m % n;
        m = tmp;
    }
    cout << m;
    return 0;
}
