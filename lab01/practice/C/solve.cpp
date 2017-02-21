#include<cstdio>
#include<cassert>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    assert(1 <= n && n <= 1000000000);
    assert(1 <= m && m <= 1000000000);
    while((n%=m)&&(m%=n));
    printf("%d\n", n+m);
    return 0;
}
