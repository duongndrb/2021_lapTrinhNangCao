//Cho 1 chuỗi các số.
//Thêm dấu gạch (-) vào giữa 2 số lẻ liên tiếp trong chuỗi và in ra kết quả.
//
//For example:
//
//Input	        Result
//13579           1-3-5-7-9
//12354           123-54
//-------------------------------------------------------------------------//

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string b=s;
    int dem=0;
    for(int i=0; i<s.length(); i++)
    {
        if(int(s[i])%2==1&&int(s[i+1])%2==1)
        {
            dem++;
            b= b.substr(0,i+dem) + '-' + s.substr(i+1);
        }
    }
    cout<<b<<endl;

}

