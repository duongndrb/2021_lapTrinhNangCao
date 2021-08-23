//Đọc dữ liệu từ bàn phím. Số n (n >= 0) đầu tiên thể hiện mảng có n phần tử.
//Dòng tiếp theo là n phần tử của mảng. In kết quả ra file output.txt
//	a, Tính Range = giá trị Max - giá trị Min. (1 điểm)
//	b, Tính Mean = giá trị trung bình của dãy số. (1 điểm)
//	c, Tính Mode = phần tử xuất hiện nhiều nhất. (1 điểm)
//	d, Tính Median là giá trị giữa của dãy số. Cách tính median như sau: (2 điểm)
//	- B1: Sắp xếp dãy số theo thứ tự tăng dần
//- B2: Nếu số phần tử là số lẻ, in ra giá trị giữa. Nếu số phần tử là số chẵn, lấy giá trị trung bình của 2 phần tử nằm giữa.
//
//------------------------------------------------------------------------------------------------------------------//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main()
{
    int n; cin>> n;
    int a[n];
    int tong = 0;
    for(int i = 0; i< n; i++)
    {
        cin >> a[i];
        tong += a[i];
    }
    int max = a[0];
    int min = a[0];
    for(int i= 0; i< n; i++)
    {
        if(a[i]>max) max= a[i];
        if(a[i]<min) min=a[i];
    }
    int range=max-min;
    int mean = tong/n;

    for(int i=0;i<n-1;i++)
    {
        for(int j=1; j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int median = 0;
    if( n%2==1)
    {
        median=a[(n-1)/2];
    }
    else
    {
        median=(a[(n-1)/2]+a[(n-1)/2+1])/2;
    }
    int cnt[9999];
    for(int i=0; i<9999;i++)
    {
        cnt[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        cnt[a[i]]++;
    }
    int maxXuatHien=0;
    int mode=a[0];
    for(int i=0; i<9999;i++)
    {
        if(cnt[i]>maxXuatHien)
        {
            maxXuatHien = cnt[i];
            mode=i;
        }
    }

    //xuat ra file
    fstream f;
    f.open("output.txt", ios::out);

    f<<"Range: " << range <<"\n";
    f<<"Mean: " << mean << "\n";
    f<<"Mode: " << mode << "\n";
    f<<"Median: " <<median<< "\n";
    f.close();

    return 0;

}
