//Có N con chim. Loài của mỗi con chim được đánh số từ 1 tới 5.
//
//Tìm loài chim có nhiều con nhất và in ra số hiệu của loài đó. Nếu nhiều loài có cùng số chim thì in ra số hiệu nhỏ nhất.
//
//Input:
//    Đầu vào từ bàn phím gồm 2 dòng:
//        Dòng đầu tiên chứa số nguyên n là số lượng chim
//    Dòng tiếp theo mảng n số ngyên biểu diễn số hiệu loài của mỗi con chim
//Output:
//    In ra số hiệu loài chim có số lượng lớn nhất, nếu có nhiều loài có cùng số chim in ra số hiệu nhỏ nhất
//
//For example:
//
//Input	        Result
//6               4
//1 4 4 4 5 3
//
///////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int n; cin >> n;
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

    }
}
