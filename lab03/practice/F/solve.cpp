#include<cstdio>
#include<algorithm>
#include<cassert>
using namespace std;
const int MAX = 100000 + 10;

int rec[MAX];

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    assert(1 <= n && n <= 100000);
    assert(0 <= k && k <= 1000000000);
    k %= n;
    for(int i = 0 ; i < n ; i++) {
        scanf("%d", &rec[i]);
    }
    reverse(rec, rec+k);
    reverse(rec+k, rec+n);
    reverse(rec, rec+n);
    for(int i = 0 ; i < n ; i++) {
        printf("%d%c", rec[i], " \n"[i==n-1]);
    }
    return 0;
}
