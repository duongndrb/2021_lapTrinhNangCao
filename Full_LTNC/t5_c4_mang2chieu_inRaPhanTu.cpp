//Cho ma trận kích thước m×n chứa các số nguyên, các hàng được đánh số từ 1 đến m, các cột được đánh số từ 1 đến n. Có Q câu hỏi, mỗi câu hỏi đưa ra 2 số i,j. Nhiệm vụ của bạn là in ra giá trị của phần tử ở hàng thứ i và cột thứ j của ma trận.
//
//Đầu vào
//Đầu vào từ bàn phím gồm m+Q+1 dòng.
//
//Dòng đầu tiên chứa 3 số nguyên n,m,Q(m,n,Q≤1000).
//m dòng tiếp theo mỗi dòng chứa n số nguyên biểu diễn ma trận đã cho, các số liên tiếp trên một dòng cách nhau bởi một dấu cách.
//Q dòng tiếp theo, mỗi dòng là một câu hỏi chứa 2 số nguyên i,j cách nhau bởi một dấu cách.
//Đầu ra
//In ra màn hình Q dòng, mỗi dòng tương ứng với câu trả lời của một câu hỏi.

#include <iostream>
using namespace std;
int main()
{
    int m, n, Q;  cin >> m >> n >> Q;
    int arr[m][n];

    //init arr
    for(int i = 0; i < m; i ++){
        for(int j = 0; j < n; j ++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < Q; i++){
        int a, b; cin >> a >> b;
        cout << arr[a-1][b-1] << endl;
    }
    return 0;
}

