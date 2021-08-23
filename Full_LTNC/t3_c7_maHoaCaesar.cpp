//Đầu vào gồm độ dài chuỗi, chuỗi, và số kí tự dịch chuyển.
//Hãy mã hóa theo cách của Caesar và in ra chuỗi được mã hóa.
//
//For example:
//
//Input	            Result
//11                  okffng-Qwvb
//middle-Outz
//2
//
//38                  Fqbfdx-Qttp-ts-ymj-G
//Always-Look-on-the-Bright-Side-of-Life
//5
//------------------------------------------------------------//
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n,m;
    char s[100];
    cin >> n;
    cin >> s;
    cin >> m;
    for (int i=0; i<n; i++)
    {
        if (s[i]>='A' && s[i] <='Z')
        {
            s[i]=((s[i]-65+m)%26)+65;
        }
        if (s[i]>='a' && s[i] <='z')
        {
            s[i]=((s[i]-97+m)%26)+97;
        }
    }
    for (int i=0; i<n; i++)
        cout << s[i];
}
