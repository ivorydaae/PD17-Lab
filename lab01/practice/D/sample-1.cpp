#include<iostream>
using namespace std;
int main(){
    int x1, x2, x3, x4, y1, y2, y3, y4;
    int xConvL, xConvR, yConvU, yConvD, xSign = 0, ySign = 0;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    cin >> x4 >> y4;
    if (x1<=x3){
        if(x2<=x4){
            if(x2>x3){
                xConvL = x3;
                xConvR = x2;
                xSign = 1;
            }
        }
        if(x2>=x4){
            xConvL = x3;
            xConvR = x4;
            xSign = 1;
        }
    }
    if (x1>=x3){
        if(x2>=x4){
            if(x1<x4){
                xConvL = x1;
                xConvR = x4;
                xSign = 1;
            }
        }
        if(x2<=x4){
            xConvL = x1;
            xConvR = x2;
            xSign = 1;
        }
    }
    if (y1<=y3){
        if(y2<=y4){
            if(y1>y4){
                yConvU = y1;
                yConvD = y4;
                ySign = 1;
            }
        }
        if(y2>=y4){
            yConvU = y1;
            yConvD = y2;
            ySign = 1;
        }
    }
    if (y1>=y3){
        if(y2>=y4){
            if(y3>y2){
                yConvU = y3;
                yConvD = y2;
                ySign = 1;
            }
        }
        if(y4>=y2){
            yConvU = y3;
            yConvD = y4;
            ySign = 1;
        }
    }
    if(xSign==1){
        if(ySign==1){
            cout<<xConvL<<" "<<yConvU<<"\n";
            cout<<xConvR<<" "<<yConvD;
        }
        if(ySign==0){
            cout<<"No"<<"\n";
        }
    }
    if(xSign==0){
        cout<<"No"<<"\n";
    }
    return 0;

}
