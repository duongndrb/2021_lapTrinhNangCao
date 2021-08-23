//Bài 1.
//Cho 1 dãy n phần tử,
//sắp xếp dãy số đó theo thứ tự tăng dần, giảm dần.
//--------------------------------------------------//

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
    a= b;
    b= temp;
}
//Sap xep theo thu tu tang dan
void xepTangDan(int a[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j =i+1; j< n; j++)
        {
            if(a[i] > a[j])
            {
                doiCho(a[i], a[j]);
            }
        }

    }
}
//Sap xep Giam Dan
void xepGiamDan(int a[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(a[i] < a[j])
            {
                doiCho(a[i], a[j]);
            }
        }

    }
}

int main()
{

    int n;
    int a[MAX];
    nhapPhanTu(a, n);
    xuatMang(a,n);
    //xepTangDan(a, n);
    //xuatMang(a,n);
    xepGiamDan(a,n);
    xuatMang(a,n);
}
