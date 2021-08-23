//Cho 1 chuỗi. In ra các từ khác nhau trong chuỗi theo thứ tự từ điển
//
//For example:
//
//Input	                Result
//this is a sentence      a
//                        is
//                        sentence
//                        this
//hello hello             hello
//
//--------------------------------------------------------------------//
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    s += ' ';
    vector<string> arr;
    string a = "";
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != ' ')a += s[i];
        else
        {
                bool check = true;
                for(int j = 0; j < arr.size(); j++)
                {
                   if(a == arr[j])check = false;
                   break;
                }
        if(check == true)
        {
                arr.push_back(a);
        }
        a = "";
    }
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
