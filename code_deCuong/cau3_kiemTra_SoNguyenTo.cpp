//Bài 3:
//Kiểm tra số nguyên tố.
//Đưa ra các số nguyên tố trong khoảng từ 1 đến n
// ----------------------------------------------//

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

// function kiemTraSoNguyenTo
bool kiemTraSoNguyenTo(int n)
{
    if(n < 2)
        return false;
    else
    {
        if(n % 2 == 0)
            return false;
        for(int i = 3; i <= sqrt((float)n); i += 2)
        {
            if(n % i == 0)
                return false;
        }
    }
    return true;
}

//function lietKeSoNguyenTo
void lietKeSoNguyenTo(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if(kiemTraSoNguyenTo(i) == true)
        {
            cout << i << " " ;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    if(kiemTraSoNguyenTo(n)== true)
    {
        cout << "Day la so Nguyen To" << endl;
    }
    else
    {
        cout << "Day khong la so Nguyen To" << endl;
    }
    lietKeSoNguyenTo(n);
    return 0;
}
