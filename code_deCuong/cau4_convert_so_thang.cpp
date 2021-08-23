//Bài 4.
//Nhập vào 1 số nguyên là 1 tháng trong năm,
//in giá tháng đó dưới dạng chữ.
//Ví du: input: 3 ; output: Thang ba
//------------------------------------------//

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int thang;
    do
    {
        cin >> thang;
    }while (thang < 0 && thang > 12);
    switch(thang)
    {
        case 1:
            cout << "Thang mot" << endl;
            break;
        case 2:
            cout << "Thang hai" << endl;
            break;
        case 3:
            cout << "Thang ba" << endl;
            break;
        case 4:
            cout << "Thang tu" << endl;
            break;
        case 5:
            cout << "Thang nam" << endl;
            break;
        case 6:
            cout << "Thang sau" << endl;
            break;
        case 7:
            cout << "Thang bay" << endl;
            break;
        case 8:
            cout << "Thang tam" << endl;
            break;
        case 9:
            cout << "Thang chin" << endl;
            break;
        case 10:
            cout << "Thang muoi" << endl;
            break;
        case 11:
            cout << "Thang muoi mot" << endl;
            break;
        case 12:
            cout << "Thang muoi hai" << endl;
            break;
        default:
            cout << "Khong co thang nao" << endl;
            break;
    }
    return 0;
}
