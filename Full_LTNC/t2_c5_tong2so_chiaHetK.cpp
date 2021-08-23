//Cho N, K và N số nguyên a_0, …, a_N-1.
//Hãy đếm số cặp (i, j) sao cho i<j và tổng (a_i+a_j) chia hết cho K.
//
//For example:
//
//Input	    Result
//2           1
//2
//8 10
//
//5           0
//10
//1 2 3 4 5
//------------------------------------------------------------------//
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int N, K;
    cin >> N >> K;
    int arr[N];
    int count = 0;
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = i+1; j < N; j++)
        {
            if((arr[i] + arr[j])%K == 0 )
            {
                count++;
            }
        }
    }

    cout << count;
    return 0;
}
