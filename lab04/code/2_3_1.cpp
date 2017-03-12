#include <iostream>
using namespace std;
int main ()
{
    int num = 0, k = 0, a = 0 ;
    cin >> num >> k ;
    if (k == 1)
        {   //盡量不要過度縮排，一個 block 一個縮排。
            for (int i = 1 ; i <= num ; i++ )
                {   
                    if (num % i == 0 )
                        cout << (a == 0 ? "" : " ") << i ;
                    a = 1 ;
                }
        }
    if (k == 2)
        {   
            // 省略
        }
    return 0 ;
}
