//Bài 2.
//Tìm số x có trong mảng n chữ số không,
//sử dụng thuật toán tìm kiếm nhị phân.
//--------------------------------------//
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

int timKiemNhiPhan(int a[], int n, int x)
{
    int left = 0;
    int right = n - 1;
    int mid;
    while(left <= right)
    {
        mid = (left + right)/2;
        if(a[mid] == x)
        {
            //tim thay X, tra ve mid la vi tri cua x trong mang
            return mid;
        }
        if(a[mid] > x)
        {
            //gioi han khoang tim kiem lai la nua khoang truoc
            right = mid -1;
        }
        else if(a[mid] < x)
        {
            //gioi han khoang tim kiem lai la nua khoang sau
            left = mid + 1;
        }
    }
    return -1; //khong tim thay x
}

int main()
{
    int n, a[MAX];
    nhapPhanTu(a,n);
    xuatMang(a,n);
    xepTangDan(a,n);
    xuatMang(a,n);
    int x;
    cout << "Nhap x: ";
    cin >> x;
    int ketqua = timKiemNhiPhan(a, n, x);
    if(ketqua == -1)
    {
        cout << "Khong tim thay x!" << endl;
    }
    else
    {
        cout << "Tim thay x tai vi tri " << ketqua << endl;
    }
    return 0;
}
