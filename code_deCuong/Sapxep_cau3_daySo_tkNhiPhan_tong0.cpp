//Bài 3.
//Cho 1 dãy số,
//đưa ra bộ 3 số có tổng bằng 0. Tìm kiếm nhị phân
//------------------------------------------------//
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h>

using namespace std;

#define MAX 100

void nhapPhanTu(int a[], int &n)
{
    do
    {
        cout << "Nhap n: ";
        cin >> n;
    }
    while(n < 0 || n>MAX);
    for(int i =0; i<n; i++)
    {
        cout << "Nhap a[" << i << "]:";
        cin >> a[i];
    }
}

void xuatMang(int a[], int n)
{
    for(int i = 0; i< n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void doiCho(int &a, int &b)
{
    int temp = a;
    a=b;
    b= temp;
}

void xepTangDan(int a[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i] > a[j])
            {
                doiCho(a[i], a[j]);
            }
        }
    }
}

void timKiem_Bo3So(int a[], int n)
{
    int dem = 0;
    for(int i = 0; i < n-2; i++)
    {
        for(int j = i+1; j<n-1; j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(a[i]+a[j]+a[k]== 0)
                {
                    cout << "Bo so co tong bang 0: ";
                    cout << a[i] << "," << a[j] << "," << a[k] << endl;
                    dem++;
                }
            }
        }
    }
}

int main()
{
    int n, a[MAX];
    nhapPhanTu(a,n);
    xuatMang(a,n);
    xepTangDan(a,n);
    xuatMang(a,n);

    timKiem_Bo3So(a, n);

    return 0;
}
