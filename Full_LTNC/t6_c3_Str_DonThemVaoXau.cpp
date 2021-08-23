//Cho xâu a, ký tự c và số nguyên n.
//Viết chương trình "độn" thêm các kí tự c vào cuối xâu a để a có độ dài bằng n.
//Nếu a đã dài quá n thì in ra xâu a.
//
//For example:
//
//Input	        Result
//hello world     hello world####
//#
//15
//
//hello           hello
//*
//4
//------------------------------------------------------------------------------//
#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    char c;
    cin >> c;
    int n;
    cin >> n;
    if(s.length() >= n)
    {
        cout << s << endl;
    }
    else
    {
        int b = n - s.length();
        for(int i = 0; i < b; i++)
        {
            s += c;
        }
        cout << s <<endl;
    }
    return 0;
}


