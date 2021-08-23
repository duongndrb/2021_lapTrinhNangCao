//Đọc vào 1 số, in ra từ tiếng Anh tương ứng (one, two, …, nine, greater than nine)
//
//For example:
//
//Input	Result
//1       one
//
//10      greater than nine
//
//---------------------------------------------------------------------------------//

//Đọc vào 1 số, in ra từ tiếng Anh tương ứng (one, two, …, nine, greater than nine)

#include <iostream>
#include <string>
using  namespace std;

void docSoTiengAnh(int n)
{
    switch (n)
    {
        case 1:
            cout << "one";
            break;
        case 2:
            cout << "two";
            break;
        case 3:
            cout << "three";
            break;
        case 4:
            cout << "four";
            break;
        case 5:
            cout << "five";
            break;
        case 6:
            cout << "six";
            break;
        case 7:
            cout << "seven";
            break;
        case 8:
            cout << "eight";
            break;
        case 9:
            cout << "nine";
            break;
        default:
            cout << "greater than nine";
	}
}

int main()
{
    int number;
    cin >> number;
    docSoTiengAnh(number);
    return 0;
}

