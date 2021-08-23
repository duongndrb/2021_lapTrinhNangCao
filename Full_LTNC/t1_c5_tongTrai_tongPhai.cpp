

//Cho mảng có n phần tử (a_0, …, a_n-1).
//Có hay không chỉ số i để sao cho tổng trái bằng tổng phải (không tính số a_i), tức (a_0 + … + a_i-1) = (a_i+1 + … + a_n-1).
//Nếu có thì in ra "YES" , nếu không thì in ra "NO"
//
//For example:
//
//Input	    Result
//5           YES
//1 5 0 2 4
//
//5           NO
//1 2 3 4 5
//---------------------------------------------------------------------------------------------------------------------------//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[100];
    int i;
    int tong=0;
    int tong1=0;
    int ss = 0;
    for( i = 0; i<n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i<n ; i++)
    {
        tong=tong+a[i];
    }
    for (i =1; i<n-1; i++)
    {
        for (int j=0; j<i; j++)
        {
            tong1=tong1+a[j];
        }
        if (tong1 == (tong-tong1-a[i]))
        {
            ss = 1;
            break;
        }
    tong1=0;

    }
    if (ss==0)
    {
        cout <<"NO";
    }
    else
    {
        cout << "YES";
    }
}



