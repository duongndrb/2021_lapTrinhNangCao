// Đếm số các cách để sao cho một số nguyên X có thể biểu diễn được bằng tổng các số khác nhau đôi một,
// trong đó mỗi số có dạng a^N (a mũ N) với X và N là các giá trị cho trước.
// Ví dụ với X=13 và N=2, kết quả trả về là 1 do chỉ có một cách duy nhất là 13 = 3^2 + 2^2.
//
//
//
//For example:
//
//Input	    Result
//10          1
//2
//
//100         3
//2
//
//
#include <iostream>
#include <algorithm>
using namespace std;

int checkRecursive(int x, int n, int cur_num=1, int cur_sum=0)
{
    int results = 0;
    int p = pow(cur_num, n);
    while(p + cur_sum < x)
    {
        results += checkRecursive(x, n, cur_num+1, p+cur_sum);
        cur_num++;
        p = pow(cur_num, n);
    }
    if(p+cur_sum == x) results++;
    return results;
}

int main()
{
    int x, n; cin >> x >> n;
    cout << checkRecursive(x, n);
    return 0;
}
