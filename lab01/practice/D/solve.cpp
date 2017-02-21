#include<cstdio>
#include<cassert>
#include<algorithm>
using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    assert(-1000000000 <= x1 && x1 <= 1000000000);
    assert(-1000000000 <= y1 && y1 <= 1000000000);
    assert(-1000000000 <= x2 && x2 <= 1000000000);
    assert(-1000000000 <= y2 && y2 <= 1000000000);
    assert(x1 < x2);
    assert(y1 > y2);
    scanf("%d %d %d %d", &x3, &y3, &x4, &y4);
    assert(-1000000000 <= x3 && x3 <= 1000000000);
    assert(-1000000000 <= y3 && y3 <= 1000000000);
    assert(-1000000000 <= x4 && x4 <= 1000000000);
    assert(-1000000000 <= y4 && y4 <= 1000000000);
    assert(x3 < x4);
    assert(y3 > y4);
    int left_x = max(x1, x3);
    int right_x = min(x2, x4);
    int top_y = min(y1, y3);
    int bot_y = max(y2, y4);
    if(left_x >= right_x || top_y <= bot_y) {
        puts("No");
    } else {
        printf("%d %d\n%d %d\n", left_x, top_y, right_x, bot_y);
    }
    return 0;
}
