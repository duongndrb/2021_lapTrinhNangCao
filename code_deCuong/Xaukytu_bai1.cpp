//Bài 1. Nhập vào 1 xâu kí tự.
//	a. Xâu đó có độ dài bao nhiêu?.
//	b. Đếm tần số xuất hiện của mỗi kí tự trong xâu đó.
//	c. Đảo ngược xâu đó.
//	d. Kiểm tra xâu đó có đối xứng không?
//	e. Đưa ra xâu đó dưới dạng in hoa và in thường.
//	f. Chuẩn hóa 1: Loại bỏ các kí tự không thuộc bảng chữ cái.
//  g. Chuẩn hóa 2 = Chuẩn hóa 1 + in hoa chữ cái đầu tiên tại mỗi từ, các từ còn lại in thường.
//  h. Chuẩn hóa 3 = Chuẩn hóa 2 + giữa mỗi từ chỉ có 1 dấu cách. Đầu và cuối xâu không có dấu cách. Cuối câu có 1 dấu chấm "."
//	i. Xâu đó có bao nhiêu từ? Bao nhiêu từ khác nhau? Số lần xuất hiện của mỗi từ.
//	j. In hoa chữ cái đầu tiên tại mỗi từ.

//--------------------------------------------------------------------------------------------------------------------------------//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

#define MAX 100
//Dao nguoc xau
string daoNguoc(string s)
{
    int doDai = s.length();
    string temp;
    for(int i = doDai -1; i>=0; i--)
    {
        temp.push_back(s[i]);
    }
    return temp;
}


int main()
{
    string s;
    //cin.ignore();
    getline(cin,s);
    // cau a: do dai xau
    cout << "Xau co do dai" << s.length() << endl;

    //cau b:
//    int i, dem = 0;
//    for(i = 'A'; i<'z'; i++)
//    {
//        dem = 0;
//        for(int j = 0; j<s.length(); j++)
//        {
//            if(s[i] == i)
//                dem++;
//
//        }
//        if(dem!=0)
//            cout << "ky tu" << i << "xuat hien" << dem << endl;
//    }


//    vector<string>mang;
//
//    int sl=0;
//    for (i=0; i<mang.size(); i++)
//    {
//        for (j=0; j<mang.size(); j++)
//        {
//            if (mang[i]==mang[j])
//                sl++;
//        }
//        c[i][0]=mang[i];
//        c[i][1]=sl+48;
//        sl=0;
//    }
//    for (i=0; i<mang.size(); i++)
//    {
//        if (c[i][0]!=c[i+1][0])
//            cout << c[i][0] << " xuat hien " << c[i][1] << " lan" << endl;
//    }

    //cau c: dao nguoc xau
    // cach 1
    cout << "chuoi sau khi dao nguoc: " << daoNguoc(s) << endl;

    //cach 2
    for(int i = s.length()-1; i>=0; i--)
    {
        cout << s[i];
    }
    cout << endl;

    //cau d: kiem tra xau co doi xung khong
    bool checkDoiXung = true;
    for(int i = 0; i < s.length()/2 ; i++)
    {
        if(s[i] == s[s.length()-i-1])
        {
            checkDoiXung = true;
        }
        else
            checkDoiXung = false;
    }
    if(checkDoiXung == true)
    {
        cout << "xau co doi xung" << endl;
    }
    else
        cout << "xau khong doi xung" << endl;

    //cau e: dua ra xau do duoi dang in hoa va in thuong
    // In thuong
    cout << "xau in thuong : ";
    for (int i = 0; i<=s.length(); i++)
    {
        cout << s[i];
    }
    cout << endl;

    string s1 = s;
    cout << "XAU IN HOA: ";
    for(int i = 0; i <= s1.length(); i++)
    {
        if(s1[i] >= 97 && s1[i] <=122 )
        {
            s1[i] = s1[i] -32;
        }
    }
    cout << s1;
    cout << endl;
    //cau f: chuan hoa 1: loai bo ki tu khong thuoc bang chu cai
    string s2;
    cout << "nhap chuoi khac: " ;
    getline(cin,s2);
    for(int i = 0; i< s2.length(); i++)
    {

        if(s2[i] == ' ')
            continue;
        if(s2[i]<'0' || (s2[i] >'9' && s2[i] <'A') || (s2[i] >'Z' && s2[i] <'a') || (s2[i] >'z'))
           {
               s2.erase(i,1);
               i--;
           }
    }
    cout << "xau sau khi chuan hoa 1: " << s2 << endl;

    //cau g:Chuẩn hóa 2 = Chuẩn hóa 1 + in hoa chữ cái đầu tiên tại mỗi từ, các từ còn lại in thường
    //h. Chuẩn hóa 3 = Chuẩn hóa 2 + giữa mỗi từ chỉ có 1 dấu cách. Đầu và cuối xâu không có dấu cách. Cuối câu có 1 dấu chấm "."
    string out1 ="";
    bool start = 0, get_higher =1;
    for(int i = 0; i <s2.length(); i++)
    {
        if(!start)
        {
            if(s2[i]!=' ')
            {
                out1 += char( s2[i] + (s2[i]>'Z')*('A'-'a'));
                start = 1;
                get_higher = 0;
            }
            continue;
        }
        if(s2[i] == ' ')
        {
            if(get_higher) continue;
            else
            {
                out1 += ' ';
                get_higher = 1;

            }
            continue;
        }
        out1 += char(s2[i] + get_higher*(s2[i]>'Z')*('A'-'a'));
        if(get_higher) get_higher=0;
    }
    cout << out1 + '.' << endl;
    cout <<endl;

    // cau i  Xâu đó có bao nhiêu từ? Bao nhiêu từ khác nhau? Số lần xuất hiện của mỗi từ.
    string my_string;
    //cin.ignore();
    getline(cin, my_string);
    vector<string> arr;

    while(!my_string.empty())
    {
        arr.push_back(my_string.substr(0, my_string.find(" ")));
        if(my_string.find(" ") > my_string.size())
            break;
        else
            my_string.erase(0, my_string.find(" ") +1);
    }

    sort(arr.begin(), arr.end());

    cout << "Xau do co " << arr.size() << "tu." << endl;
    int count= 1;
    int soTu = 0;
    for(int i = 0; i <arr.size(); i++)
    {
        if(arr[i] == arr[i+1])
        {
            count++;
        }
        else{
            cout << arr[i] << " : " << count << endl;
            count = 1;
            soTu++;
        }
    }
    cout << "so tu khac nhau cua xau: " << soTu << endl;


    return 0;
}
