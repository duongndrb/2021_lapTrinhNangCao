//Đọc vào 2 chuỗi.
//In ra độ dài hai chuỗi, chuỗi kết nối,
//và 2 chuỗi mới từ 2 chuỗi ban đầu nhưng hoán vị kí tự đầu tiên.
//
//For example:
//
//Input	                Result
//abcd                    4 2
//ef                      abcdef
//                        ebcd af
//
//fajayeuwptdshexp        16 9
//qokarrkpi               fajayeuwptdshexpqokarrkpi
//                        qajayeuwptdshexp fokarrkpi
//------------------------------------------------------------------------//
#include <iostream>
#include <string>
using namespace std;


int soLuong(string s)
{
    int result;
    result = s.length();
    return result;
}

string ghepChuoi(string input_1, string input_2)
{
    string s = input_1 + input_2;
    while(s.find(" ") != -1)
        s.erase(s.find(" "),1);
    return s;


}
string ghepDao(string input_1, string input_2)
{
    string ketqua;
    char kytuDao;
    kytuDao = input_1[0];
    input_1[0] = input_2[0];
    input_2[0] = kytuDao;
    ketqua = input_1 + " " + input_2;
    return ketqua;


}

int main()
{
    string my_string_1;
    string my_string_2;
    getline(cin, my_string_1);
    getline(cin, my_string_2);
    soLuong(my_string_1);
    soLuong(my_string_2);
    cout << soLuong(my_string_1) << " " << soLuong(my_string_2) << endl;
    ghepChuoi(my_string_1, my_string_2);
    cout << ghepChuoi(my_string_1, my_string_2) << endl;
    ghepDao(my_string_1, my_string_2);
    cout << ghepDao(my_string_1, my_string_2) << endl;
}

