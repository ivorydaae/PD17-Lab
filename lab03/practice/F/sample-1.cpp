#include<iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int *input_array = new int[n];
    int *output_array = new int[n];
    for(int i = 0 ; i < n ; i++) {
        cin >> input_array[i];
    }
    k %= n;
    for(int i = k ; i < n ; i++) {
        output_array[i-k] = input_array[i];
    }
    for(int i = 0 ; i < k ; i++) {
        output_array[n-k+i] = input_array[i];
    }
    for(int i = 0 ; i < n ; i++) {
        if(i > 0) cout << " ";
        cout << output_array[i];
    }
    delete [] input_array;
    delete [] output_array;
    return 0;
}
