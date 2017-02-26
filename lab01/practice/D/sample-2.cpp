#include<iostream>
using namespace std;
int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    int left_x, right_x, top_y, bottom_y;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    cin >> x4 >> y4;
    left_x = x1, right_x = x2, top_y = y1, bottom_y = y2;
    if(x3 > left_x) {
        left_x = x3;
    }
    if(x4 < right_x) {
        right_x = x4;
    }
    if(y3 < top_y) {
        top_y = y3;
    }
    if(y4 > bottom_y) {
        bottom_y = y4;
    }
    bool valid = true;
    if(left_x >= right_x) {
        valid = false;
    }
    if(top_y <= bottom_y) {
        valid = false;
    }
    if(valid) {
        cout << left_x << " " << top_y << "\n"
             << right_x << " " << bottom_y;
    }
    if(valid == false) {
        cout << "No";
    }
    return 0;
}

