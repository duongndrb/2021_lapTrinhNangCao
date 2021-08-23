//Cho ma trận kích thước m×n chứa các số nguyên, các hàng được đánh số từ 1 đến m, các cột được đánh số từ 1 đến n.
//
//Viết chương trình nhập vào 4 số nguyên i1,j1,i2,j2 và tráo đổi giá trị của 2 phần tử ở vị trí (i1,j1) và (i2,j2)
//
//Đầu vào
//    Đầu vào từ bàn phím gồm m+2 dòng.
//
//    Dòng đầu tiên chứa 2 số nguyên n,m(m,n≤1000);
//    m dòng tiếp theo mỗi dòng chứa n số nguyên biểu diễn ma trận đã cho, cách nhau bởi một dấu cách;
//    Dòng tiếp theo chứa 4 số nguyên i1,j1,i2,j2.
//Đầu ra
//    In ra màn hình m dòng, in ra ma trận sau khi đã đổi chỗ.

#include <iostream>
using namespace std;

int main()
{
    int m, n; cin >> m >> n;
    int a[m][n], b[m][n];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int i1, j1, i2, j2;
    cin >> i1 >> j1 >> i2 >> j2;
    int i = m;
    int j = n;
    for(i = 0; i < i1-1; i++)
    {
        for(j = 0; j < j1-1; j++)
        {
            b[i][j] = a[i][j];
        }
    }
    if(i == i1 && j == j1)
    {
        b[i][j] = a[i2-1][j2-1];
        //b[i2-1][j2-1] = a[i1-1][j1-1];
    }
    for(i = i1; i < i2-1; i++)
    {
        for(j = j1; j < j2-1; j++)
        {
            b[i][j] = a[i][j];
        }
    }
    if(i == i2 && j == j2)
    {
        b[i][j] = a[i1-1][j1-1];
        //b[i2-1][j2-1] = a[i1-1][j1-1];
    }
    for(i = i2; i < m; i++)
    {
        for(j = j2; j < n; j++)
        {
            b[i][j] = a[i][j];
        }
    }
    for(i = 0; i < m; i++)
    {
        for( j = 0; j < n; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}
