#include<iostream>
using namespace std;
int main() {
    int m = 0, n = 0, temp = 0;
    cin >> m >> n ;
    if(n > m) {
        // swap n & m
        temp = m;
        m = n;
        n = temp;
    }
    while(m % n!= 0) {
        temp = n;
        n = m % n;
        m = temp;
    }
    cout << n;
    return 0;
}
