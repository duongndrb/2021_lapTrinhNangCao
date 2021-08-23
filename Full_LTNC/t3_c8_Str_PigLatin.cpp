//Nhập vào 1 từ. In ra từ đó dưới dạng "Pig Latin":
//
//1. Nếu từ bắt đầu bằng nguyên âm, thêm đuôi "way" vào cuối từ
//
//2. Nếu từ bắt đầu bằng phụ âm, chuyển tất cả các ký tự trước nguyên âm đầu tiên trong từ xuống cuối từ và thêm "ay"
//
//3. Chữ "y" được coi như là phụ âm nếu nó là chữ đầu tiên trong từ, còn lại coi như nguyên âm.
//
//4. Nếu từ viết hoa thì viết hoa chữ đầu tiên trong từ sau khi chuyển
//
//For example:
//
//Input	    Result
//string      ingstray
//Yellow      Ellowyay
//----------------------------------------------------------------------------------------------------------------//

#include<iostream>
#include<string>
using namespace std;
bool check(char a)
{
    bool c=false;
    if(a=='u'||a=='U'||a=='e'||a=='E'||a=='o'||a=='O'||a=='a'||a=='A'||a=='i'||a=='I'||a=='y')
    {
        c=true;
    }
    return c;
}
int main()
{
    string s;
    cin>>s;
    if(check(s[0])==true)
    {
        s=s+"way";
    }
    else
    {
        if(s[0]>'Z')
        {
            for(int i=0; i<s.length(); i++)
            {
                if(check(s[i])==true)
                {
                    s=s.substr(i,s.length()-1)+s.substr(0,i)+'a'+'y';
                    break;
                }
            }
        }
        else
        {
            for(int i=0; i<s.length(); i++)
            {
                if(check(s[i])==true)
                {
                    s=char(int(s[i])-32)+s.substr(i+1,s.length()-1)+char(int(s[0])+32)+s.substr(1,i-1)+'a'+'y';
                    break;
                }
            }
        }
    }
    cout<<s<<endl;
}
