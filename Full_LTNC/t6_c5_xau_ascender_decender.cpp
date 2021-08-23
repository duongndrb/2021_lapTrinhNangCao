//Trong xử lý văn bản, đôi khi rất tốt nếu biết 1 từ có chứa kí tự ascender hoặc decender nào không.
//Ascender gồm các kí tự thường b, d, f, h, k, l, t.
//Decender gồm các kí tự thường g, j, p, q, y.
//Viết 1 chương trình để kiểm tra các từ có chứa bất kì ancender hoặc decender nào không.
//Nếu có thì in ra 1, nếu không thì in ra -1.
//
//Nhập n là số các từ cần kiểm tra, n dòng tiếp theo là n từ.
//
//For example:
//
//Input	Result
//1       -1
//a
//
//2       -1
//a       1
//b
//
//-------------------------------------------------------------------------------------------------//

#include <iostream>
#include <string>

using namespace std;

void kiemTra(string s)
{
    int ancender = 0;
    int decender = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i]== 'd' || s[i] == 'b' || s[i] == 'f' || s[i] == 'h' || s[i] == 'k' || s[i] == 'l' || s[i] == 't')
        {
            ancender = 1;
            decender = decender;
        }
        else if(s[i]== 'g' || s[i] == 'j' || s[i] == 'p' || s[i] == 'q' || s[i] == 'y')
        {
            decender = 1;
            ancender = ancender;
        }
        else
        {
            decender = decender;
            ancender = ancender;
        }
    }
    if(decender == 1 ){
        cout << "1";
    }
    else if(ancender == 1)
    {
        cout << "1";
    }
    else
    {
        cout << "-1";
    }

}

int main(){
    int n;cin>> n;
    string Str[n];
    string my_string;
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        //getline(cin, my_string);
        getline(cin, Str[i]);
        //my_string = Str[i];
    }
    for(int i =0; i< n; i++)
    {
        kiemTra(Str[i]);
        cout << endl;
    }
}

