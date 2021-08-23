//Nhập vào một chuỗi kí tự (có dấu cách).
//Chuẩn hóa chuỗi kí tự đó theo cách viết họ tên (cắt kí tự trắng 2 đầu, cắt bớt các dấu trắng (chỉ để lại 1) giữa các từ,
//                                                                 viết hoa đầu từ, các chữ cái khác viết thường)
//
//For example:
//
//Input	                Result
//    nguyen   van  a     Nguyen Van A
//
//    tran   thi     c    Tran Thi C
//
//----------------------------------------------------------------------------------------------------------------------//
#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string out = "";
    bool start = 0, get_higher = 1;
    for(int i = 0; i < s.length(); i++)
    {
        if(!start)
        {
            if(s[i]!=' ')
            {
                out += char(s[i]+(s[i]>'Z')*('A'-'a'));
                start = 1;
                get_higher = 0;
            }
            continue;
        }
        if(s[i] == ' ')
        {
            if(get_higher) continue;
            else
            {
                out += ' ';
                get_higher = 1;

            }
            continue;
        }
        out += char(s[i] + get_higher*(s[i] > 'Z')*('A' - 'a'));
        if(get_higher) get_higher = 0;
    }
    cout << out;
    return 0;
}
