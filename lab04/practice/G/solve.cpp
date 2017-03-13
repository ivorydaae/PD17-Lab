#include<cstdio>
#include<cassert>
using namespace std;
const int MAX = 100 + 10;

int rec[MAX][MAX];
int n;

void rotate() {
    for(int i = 0 ; i < (n+1)/2 ; i++) {
        for(int j = 0 ; j < n/2 ; j++) {
            int tmp = rec[i][j];
            rec[i][j] = rec[n-j-1][i];
            rec[n-j-1][i] = rec[n-i-1][n-j-1];
            rec[n-i-1][n-j-1] = rec[j][n-i-1];
            rec[j][n-i-1] = tmp;
        }
    }
}

int main() {
    scanf("%d", &n);
    assert(1 <= n && n <= 1000);
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            scanf("%d", &rec[i][j]);
        }
    }
    for(int k = 0 ; k < 4 ; k++) {
        rotate();
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < n ; j++) {
                printf("%d%c", rec[i][j], " \n"[j==n-1]);
            }
        }
    }
    return 0;
}
