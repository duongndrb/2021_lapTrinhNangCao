//Nhập vào 1 xâu.
//In ra số nguyên âm và phụ âm của xâu đó.
//
//For example:
//
//Input	        Result
//hello world     3 7
//cplusplus       2 7
//
//-----------------------------------------//
// Nhap vao 1 xau
// in ra so nguyen am va phu am cua xau do

#include <iostream>
#include <string>
using namespace std;

void demSo(string s)
{

    int ketquaNguyenAm = 0;
    int ketquaPhuAm = 0;
    for(int i = 0; i <s.length(); i++)
    {
        if(s[i]== 'a' || s[i] == 'i' || s[i] == 'o' || s[i] == 'e' || s[i] == 'u')
        {
            ketquaNguyenAm += 1;
            ketquaPhuAm = ketquaPhuAm;
        }
        else if(s[i] == ' ')
        {
            ketquaNguyenAm = ketquaNguyenAm;
            ketquaPhuAm = ketquaPhuAm;
        }
        else
        {
            ketquaNguyenAm = ketquaNguyenAm;
            ketquaPhuAm += 1;
        }
    }
    cout << ketquaNguyenAm << " " <<ketquaPhuAm;

}

int main()
{
    string my_string;
    getline(cin, my_string);
    demSo(my_string);
}
