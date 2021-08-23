//Dữ liệu đầu vào gồm: n - số các dãy số với độ dài khác nhau; q - số các câu truy vấn (query).
//Tiếp sau là n dãy số, mỗi dãy bắt đầu bằng số các phần tử của dãy và tiếp theo là giá trị các phần từ trong dãy đó.
//Cuối cùng là q câu truy vấn gồm hai giá trị (i, j).
//Với mỗi câu truy vấn, yêu cầu là in ra giá trị của phần tử có chỉ số (index) j tại mảng (dãy số) thứ i.
//
//Input	            Result
//2 2                 5
//3 1 5 4             9
//5 1 2 8 9 3
//0 1
//1 3
//
//3 1                 6
//1 0
//4 3 2 1 5
//3 2 4 6
//2 2

//--------------------------------------------------------------------------------------------------------------------//
#include<iostream>

using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int sn[100][100];
    int sq[100][2];
    for (int i=0; i<n; i++)
    {
        int m;
        cin >> m;
        for (int j=0; j<m; j++)
            cin >> sn[i][j];
    }
    for (int i=0; i<q; i++)
    {
        for (int j=0; j<2; j++)
            cin >> sq[i][j];
    }
    for (int i=0; i<q; i++)
    {
        cout << sn[sq[i][0]][sq[i][1]] << endl;
    }
    return 0;
}
