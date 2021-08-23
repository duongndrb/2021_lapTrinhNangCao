//Cho 1 xâu s được lặp lại vô hạn và số nguyên n.
//Đếm và in ra số các chữ "a" trong n ký tự đầu của xâu vô hạn đó.
//
//For example:
//
//Input	        Result
//aba             7
//10
//
//a               1000000000000
//1000000000000
//-----------------------------------------------------------------//
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int len = str.length();
    //cout<<len;
    long int n;
    cin >>n;
    int du = n%len;
    //cout<< du;
    long int dem = 0;
    long int dem1 = 0;
    for(long int i=0; i<len; i++)
    {
        if (str[i] == 'a')
        {
            dem+=1;
        }
    }
//cout<<dem;

    for(long int i=0; i<du; i++)
    {
        if (str[i] == 'a')
        {
            dem1+=1;
        }
    }
//cout<<dem1;
    cout<< dem*(n/len)+dem1;
    return 0;
}
