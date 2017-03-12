#include<iostream>
using namespace std;
int main()
{     //請注意縮排對齊
      int num = 0, sum = 0;
      while(cin >> num)
      {
        //縮排距離請保持一致
        for(int i=2; i <= num; i++)
        {
                while(num % i == 0)
                {
                    if(num % (i * i)==0)
                    {
                        //中間省略
                    }
                }
        }
      
        cout << "\n";
    
        } //這行與下一行應該要對齊
    return 0;
}
