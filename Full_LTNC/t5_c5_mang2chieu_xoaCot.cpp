//Cho ma trận kích thước m×n chứa các số nguyên, các hàng được đánh số từ 1 đến m, các cột được đánh số từ 1 đến n. Cho số nguyên i nhiệm vụ của bạn là viết chương trình xóa cột thứ i của ma trận.
//
//Đầu vào
//Đầu vào từ bàn phím gồm m+2 dòng:
//
//Dòng đầu tiên chứa 2 số nguyên m,n cách nhau bởi một dấu cách(m,n≤1000).
//m dòng tiếp theo, mỗi dòng chứa n số, cách nhau bởi một dấu cách, biểu diễn ma trận đã cho.
//Dòng cuối cùng chứa số nguyên i.
//Đầu ra
//In ra màn hình m dòng, mỗi dòng gồm n−1 số, cách nhau bởi một dấu cách, biểu diễn ma trận sau khi đã xóa cột thứ i.
#include <iostream>
using namespace std;

int main()
{
    int m, n, cot; cin >> m >> n ;
    int a[m][n], b[m][n-1];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> cot;
    if(cot == 1)
    {
        for(int i = 0; i < m; i++)
        {
            for(int j = 1; j < n; j++ )
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++ )
            {
                if(j != cot-1)
                {

                    cout << a[i][j] << " ";
                }
            }
            cout << endl;
        }
//        for(int i = 0; i < m; i++)
//        {
//            for(int j = cot; j < n; j++ )
//            {
//                cout << a[i][j] << " ";
//            }
//            cout << endl;
//        }
    }
}
