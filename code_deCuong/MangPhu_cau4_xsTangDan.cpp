//Bài 4.
//Nhập vào 1 dãy số n phần tử,
//in dãy số đó theo thứ tự tăng dần.
//Lưu ý: không dùng thuật toán sắp xếp.
//-------------------------------------//
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
int KiemTraTangDan(int b[], int nb)
{
    for(int i = 0; i < nb - 1; i++)
    {
        if(b[i] > b[i + 1])
        {
            return 0;
        }
    }
    return 1;
}

void xuatMangCon(int b[], int nb)
{
    for(int i = 0; i< nb; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
}

void lietKeDayConTangDan(int a[], int n)
{
    //int chieuDai;
    int b[MAX], nb;
    for(int i = 0; i < n; i++)
    {
        nb=0;
            for(int j = i; j< n; j++)
            {
                b[nb]= a[j];
                nb++;
            }
            if(KiemTraTangDan(b, nb) == 1)
            {
                xuatMangCon(b,nb);
            }
        }
    }

int main()
{
    int n;
    int a[MAX];
    nhapPhanTu(a,n);
    xuatMang(a,n);
    lietKeDayConTangDan(a,n);
    return 0;
}
