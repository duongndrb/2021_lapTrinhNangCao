//Bài 1.
//Nhập vào 1 dãy số,
//đếm xem có bao nhiêu số khác nhau trong dãy số đó
//và đưa ra số lần xuất hiện của mỗi số.
//-------------------------------------------------//

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
    int tmp = a;
    a= b;
    b= tmp;
}
void xepTangDan(int a[], int n)
{
    for(int i = 0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                doiCho(a[i],a[j]);
            }
        }
    }
}
int demSoLuongKhacNhau(int a[], int n)
{
    int dem = 0;
    int flag;
    for(int i =0; i < n; i++)
    {
        flag = 1;
        for(int j = i+1; j<n; j++)
        {
            if(a[i] == a[j])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            dem++;
        }
    }
    return dem;
}

int main()
{
    int n;
    int a[MAX];
    nhapPhanTu(a, n);
    xuatMang(a,n);
    cout << "So luong so khac nhau: " << demSoLuongKhacNhau(a,n) << endl;
    int cnt[MAX];
    for(int i = 0; i < MAX; i++)
        cnt[i] =0;
    for(int i = 0; i< n; i++)
    {
        cnt[a[i]]++;
    }
    for(int i = 0; i<MAX;i++)
    {
        if(cnt[i]>0)
            cout << "Gia tri " << i << " co tan suat " << cnt[i] << endl;
    }
}
