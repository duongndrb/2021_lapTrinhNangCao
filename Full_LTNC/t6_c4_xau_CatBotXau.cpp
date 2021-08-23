
//Cho xâu a và số nguyên n.
//Viết chương trình cắt bớt các ký tự cuối xâu a sao cho a có độ dài n.
//Nếu a đã có độ dài nhỏ hơn hoặc bằng n thì in ra xâu a.
//
//For example:
//
//Input	        Result
//hello world     hello
//5
//
//abcxyz          abcxyz
//6
//---------------------------------------------------------------------//

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int n;
    cin >> n;
    if(s.length() <= n)cout << s;
    else cout << s.substr(0,n);
    return 0;

}
