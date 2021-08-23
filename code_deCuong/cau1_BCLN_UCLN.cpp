//Bài 1.
//Tính Bội chung nhỏ nhất và Ước chung lớn nhất của 2 số.
//Nếu số nhập vào <= 0 thì yêu cầu nhập lại.
//--------------------------------------------------------//

#include <iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
    int a, b, i;
    do{
        cout << "Nhap a:";
        cin >> a;
        if(a<0)
        {
            cout << "Nhap lai a!";
        }
    }while(a<0);
    do{
        cout << "Nhap b:";
        cin >> b;
        if(b<0)
        {
            cout << "Nhap lai b!";
        }
    }while(b<0);
    int Max = a > b ? a : b;
    int Min = a < b ? a : b;

    // BCNN
//    if(a == b)
//    {
//        return a;
//    }
//    else{
//        for(i = Max; i< a*b; i++)
//        {
//            if(i % a == 0 && i % b == 0)
//            {
//                return i;
//                break;
//            }
//        }
//    }
//    cout << "BCNN la: " << i ;


    //UCLN
    while(a!=b)
    {
        if(a > b)
            a = a - b;
        else
            b = b - a;
    }
    cout << "UCLN la: " << a ;
    return 0;
}
