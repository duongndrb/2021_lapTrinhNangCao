//
//Cho N, K và N số nguyên a_0, …, a_N-1.
//Hãy đếm số các số i sao cho a_i chia hết cho K
//
//For example:
//
//Input	    Result
//5           1
//3
//1 2 4 5 6
//
//7           0
//5
//1 11 3 51 32 8 12
//----------------------------------------------//

#include <iostream>
using namespace std;
int main()
{
    int N, dem, i;
    int K;
    int a[100];
    dem = 0;
    cin >> N;
    cin >> K;
    for (i=0; i<N; i++)
    {
        cin >> a[i];
    }
    for (i=1; i<N; i++)
    {
        if (a[i]%K == 0)
        {
            dem =dem+1;
        }

    }
    cout << dem;
}
