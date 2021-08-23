//Dữ liệu vào gồm số n, và tiếp theo là n số nguyên.
//Hãy sắp xếp các số theo thứ tự tăng dần và in ra.
//(Lưu ý: sử dụng thư viện vector và nên sử dụng hàm sort có sẵn để sắp xếp.)
//
//For example:
//
//Input	        Result
//5               1 4 6 8 10
//1 6 10 8 4
//
//3               1 2 7
//1 7 2
//
//------------------------------------------------------------------------------//

#include <iostream>
#include <vector>
//#include<bits/stdc++.h>
#include <algorithm>
//#include <stdio.h>
//#include <stdlib.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr;

    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr.at(i) << " ";
    }
    cout << endl;
}
