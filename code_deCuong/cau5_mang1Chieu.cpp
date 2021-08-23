//Bài 5. Cho 1 dãy n phần tử:
//a. Tính tổng các số chẵn, tổng các số lẻ, tổng các số nguyên tố, …
//b. Đưa ra các cặp số có tổng bằng k.
//--------------------------------------------------------------------//


#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h>

using namespace std;
#define MAX 100

void nhapMang(int a[], int &n)
{
    do
    {
        cin >> n;
        if( n <= 0 || n> MAX )
            cout << "so nhap sai roi!" << endl;
    }while(n <= 0 || n>MAX);
    for (int i =0; i< n; i++)
    {
        cout << "Nhap a[" << i << "] : " ;
        cin >> a[i];
    }
}
void xuatMang(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}
int tongSoChan(int a[], int n)
{
    long tongChan = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i]% 2 == 0)
        {
            tongChan = tongChan + a[i];
        }
    }
    return tongChan;
}
int tongSoLe(int a[], int n)
{
    long tongLe = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i]% 2 == 1)
        {
            tongLe = tongLe + a[i];
        }
    }
    return tongLe;
}

// tong cac so nguyen To
bool kiemTraSoNguyenTo(int n)
{
    if(n < 2)
    {
        return false;
    }
    else if(n> 2)
    {
        if( n % 2 == 0)
        {
            return false;
        }
        for( int i = 3; i <= sqrt((float)n); i+=2)
        {
            if(n% i ==0 )
            {
                return false;
            }
        }
    }
    return true;
}

int tongSoNguyenTo(int a[], int n)
{
    int tongNguyenTo = 0;
    for(int i =0; i < n; i++)
    {
        if(kiemTraSoNguyenTo(a[i])== true)
        {
            tongNguyenTo += a[i];
        }
    }
    return tongNguyenTo;
}

// Dua ra cap so co tong bang K
void capSoTong(int a[], int n, int k)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n-1; j++)
        {
            if (a[i]+a[j] == k)

                cout << "Cap so: " << a[i] << " " << a[j] << endl;
        }
    }
}

int main()
{
    int n;
    int a[MAX];
    nhapMang(a, n);
    cout << "Tong cac so chan: " << tongSoChan(a, n) << endl;
    cout << "Tong cac so le: " << tongSoLe(a, n) << endl;
    cout << "Tong cac so nguyen to: " << tongSoNguyenTo(a, n) << endl;

    int k;
    cin >> k;
    capSoTong(a, n, k);
}
