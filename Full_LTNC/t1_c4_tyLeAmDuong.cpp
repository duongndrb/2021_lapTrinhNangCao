//Nhập vào các số (dòng đầu là số các số, dòng sau là dãy giá trị).
//In ra tỷ lệ các số các số dương, số các số âm và số các số bằng 0
//(mỗi giá trị tỷ lệ trên một dòng).
//
//For example:
//
//Input	        Result
//5               0.4
//1 -1 2 -2 0     0.4
//                0.2
//-----------------------------------------------------------------//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[100];
    int i;
    for( i = 0; i<n; i++)
    {
        cin >> a[i];
    }
    double dem1 =0, dem2=0, dem3=0;
    for(i = 0; i < n; i++)
    {
        if(a[i]>0)
        {
            dem1++;
        }
        else if(a[i]<0)
        {
            dem2++;
        }
        else
        {
            dem3++;
        }
    }
    cout << dem1/n <<endl;
    cout << dem2/n << endl;
    cout << dem3/n << endl;
}
