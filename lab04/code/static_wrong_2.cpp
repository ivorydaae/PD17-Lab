#include<iostream>
using namespace std;
int main() {
    int arr[10000000];
    for(int i = 0 ; i < 10000000 ; i++)
        arr[i] = i;
    cout << arr[9999999] << endl;
    return 0;
}
