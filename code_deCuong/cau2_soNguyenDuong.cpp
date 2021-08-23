//Bài 2. Nhập vào 1 số nguyên dương
//a. Số đó có bao nhiêu chữ số?
//b. Tính tổng các chữ số của số đó.
//c. In ra số đảo ngược của số đó.
//d. Số đó có đối xứng không
//-----------------------------------//

#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
    long int so;
    int soChuSo;
    long theMang;
    do
    {
        cout << "Nhap so nguyen duong: ";
        cin >> so;
        if(so <0)
        {
            cout << " Nhap lai so!" << endl;
        }
    }while(so < 0);

    // khai bao tong cac so chu so
    long sum;
    sum = 0;

    // cau A va B
    // CACH 1:
    soChuSo = 0;
    theMang = so;
    if(so == 0)
        soChuSo = 1;
        sum = 0;
    while(theMang != 0)
    {
        // tong cac so chu so
        sum = sum + theMang%10;
        // dem so chu so
        soChuSo += 1;
        theMang = theMang/10;

    }

    // CACH 2:
    //soChuSo = so == 0 ? 1 : (int) log10((float) so) +1;
    cout << "So chu so cua so do: " << soChuSo << endl;


    cout << "Tong cac chu so cua so do: " << sum << endl;

    // =>  Cau C: In ra so dao nguoc
    long soNghichDao;
    soNghichDao = 0;
    long theMang1 = so;
    do
    {
        soNghichDao = soNghichDao *10 + theMang1 %10;
        theMang1 = theMang1/10;
    }while(theMang1 != 0);

    cout << "So dao nguoc cua so do: " << soNghichDao << endl;

    // => Cau D: kiem tra Doi Xung
    bool ktraDoiXung;
    if(soNghichDao == so)
    {
        cout << "Day la so doi xung" << endl;
        ktraDoiXung = true;
        return ktraDoiXung;
    }
    else
    {
        cout << "Day khong la so doi xung" << endl;
        ktraDoiXung = false;
        return ktraDoiXung;
    }

    return 0;
}
