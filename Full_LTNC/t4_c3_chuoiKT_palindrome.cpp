//Một chuỗi kí tự gọi là "palindrome" nếu nó đối xứng (hay đọc từ trái qua phải giống đọc từ phải qua trái).
//Ví dụ: aba, a, bbb, aa, baab.
//
//Cho một chuỗi, hãy tìm và ra chỉ số (index) của một kí tự trong chuỗi để sao cho nếu loại bỏ kí tự đó đi thì chuỗi còn lại là "palindrome".
//Nếu chuỗi ban đầu đã là "palindrome" thì in ra -1.
//
//(Chú ý là luôn có giải pháp, tức chuỗi cho ban đầu chỉ cần loại đi tối đa một kí tự thì sẽ đối xứng.)
//
//
//
//For example:
//
//Input	Result
//aaab    3
//aaa     -1
//
//-------------------------------------------------------------------------------------------------------------------------------------------//
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    getline(cin, a);
    for(int i = 0; i < a.length() / 2; i++)
    {
        if(a[i] != a[a.length() -i -1])
        {
            if(a[i+1] == a[a.length() - i - 1])cout << i << endl;
            else cout << a.length() - i - 1 << endl;
            break;
        }
        if(i == a.length() / 2 - 1) cout << "-1" << endl;
    }
    return 0;
}

