//Đọc vào chuỗi thời gian dạng (format) 12 tiếng.
//Chuyển đổi, rồi in ra thời gian dạng (format) 24 tiếng.
//Input           Output
//07:05:45PM      19:05:45
//
//12:40:22AM      00:40:22
//------------------------------------------------------//
#include<iostream>
using namespace std;

void print24(string str)
{
// Get hours
    int h1 = (int)str[1] - '0';
    int h2 = (int)str[0] - '0';
    int hh = (h2 * 10 + h1 % 10);

// If time is in "AM"
    if (str[8] == 'A')
    {
        if (hh == 12)
        {
            cout << "00";
            for (int i=2; i <= 7; i++)
                cout << str[i];
        }
        else
        {
            for (int i=0; i <= 7; i++)
                cout << str[i];
        }
    }

// If time is in "PM"
    else
    {
        if (hh == 12)
        {
            cout << "12";
            for (int i=2; i <= 7; i++)
                cout << str[i];
        }
        else
        {
            hh = hh + 12;
            cout << hh;
            for (int i=2; i <= 7; i++)
                cout << str[i];
        }
    }
}


int main()
{
    string str;
    cin >>str;
    print24(str);
    return 0;
}

