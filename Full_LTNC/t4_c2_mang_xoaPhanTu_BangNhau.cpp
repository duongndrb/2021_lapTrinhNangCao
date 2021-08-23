//Cho một dãy (mảng) các số nguyên.
//Mỗi thao tác xoá một phần tử trong dãy.
//Hỏi số thao tác ít nhất cần thực hiện để được kết quả là tất cả các phần tử còn lại của dãy là bằng nhau ?
//
//For example:
//
//Input	                    Result
//5                           2
//3 3 2 1 3
//
//8                           5
//96 96 45 52 73 44 51 96
//
//---------------------------------------------------------------------------------------------------------//

#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
// int arr[n];
    map<int, int> m;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }
    int max = 0;
    for(auto it : m)
    {
        if(max < it.second) max = it.second;
    }
    cout << n-max;
    return 0;
}
