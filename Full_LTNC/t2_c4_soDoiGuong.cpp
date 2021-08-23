//Cho 2 số M và N.
//Tìm tất cả các số trong khoảng từ M đến N sao cho số đó là số đối gương
//(số mà viết ngược lại vẫn có giá trị là chính nó, VD:121, 11, ...).
//Nếu không có số nào in ra "none".
//
//For example:
//
//Input	Result
//0       11
//20
//
//0       none
//10
//
//------------------------------------------------------------------------//

#include <iostream>
using namespace std;

int main()
{
    unsigned int M, N;
    int count = 0;
    cin >> M >> N;
    for (int i = M; i <= N; i++)
    {
        unsigned int num, r, sum = 0, temp;
        num = i;
        for (temp = num; num != 0; num = num / 10)
        {
            r = num % 10;
            sum = sum * 10 + r;
        }
        if (temp == sum && temp > 9)
        {
            count++;
            cout << sum << " ";
        }
    }
    if (count == 0)
        cout << "none" << endl;
    return 0;
}
