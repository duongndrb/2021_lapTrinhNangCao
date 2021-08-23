//Cho số N. Tìm số các chữ số d_i của N sao cho N chia hết cho d_i
//
//For example:
//
//Input	Result
//36      2
//
//9       1
//---------------------------------------------------------------//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n; cin >> n;
    int m = n;
    int a; int count = 0;
    while (m > 0)
    {
        a = m - (m/10)*10;
        if(a == 0)
        {
        }
        else
        {
            if(n%a == 0)
            {
                count++;
            }
        }
        m = m/10;
    }

    cout << count;
    return 0;
}
