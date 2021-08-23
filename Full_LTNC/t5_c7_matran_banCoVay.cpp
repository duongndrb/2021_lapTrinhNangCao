//Trong 1 bàn cờ vây, 1 quân được gọi là hết khí khi 4 hướng xung quanh nó bị vây quanh bởi quân địch.
//Cho trạng thái 1 bàn cờ vây có kích thước m x n, quân trắng được thể hiện bởi số 1,
//quân đen được biểu thị bởi số 2, các ô không có quân nào được biểu thị bởi số 0.
//Bạn hãy kiểm tra xem có quân trắng nào bị hết khí hay không ?
//Nếu tồn tại ít nhất 1 quân trắng hết khí thì in ra Yes, còn không thì in ra No.
//
//Ví dụ về khí trong bàn cờ 4 x 4
//
//0 2 0 0
//
//2 1 2 1
//
//0 2 1 2
//
//0 0 0 0
//
//Ta có, quân trắng ở vị trí (1, 1) hết khí, quân trắng ở vị trí (1, 3) còn khí.
//
//Lưu ý: Chỉ số hàng và cột của mảng được bắt đầu từ 0. Tọa độ (0, 0) là góc trên bên trái.
//
//
//For example:
//
//Input	Result
//4 4     YES
//0 2 0 0
//2 1 2 1
//0 2 1 2
//0 0 0 0
//
//4 4     NO
//0 2 0 0
//2 1 1 1
//0 2 1 2
//0 0 0 0
//
//----------------------------------------------------------------------------------------------//
#include<iostream>
using namespace std;
int main() {
    int m;
    int n;
    cin >> m;
    cin >> n;
    int a[1000][1000];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int dem = 0;
    for (int i = 1; i < m - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            if (a[i][j] == 1 & a[i - 1][j] == 2 & a[i + 1][j] == 2 & a[i][j - 1] == 2 & a[i][j + 1] == 2) {
                dem += 1;
            }
        }
    }

    for (int i = 1; i < m-1; i++) {
        if (a[i][0] == 1 & a[i + 1][0] == 2 & a[i-1][0] == 2 & a[i][1] == 2){
        dem += 1;
        }
        else if (a[i][n - 1] == 1 & a[i][n-2] == 2 & a[i-1][n-1] == 2 & a[i+1][n-1] == 2) {
            dem += 1;
        }
    }

    for (int j = 1; j < n - 1; j++) {
        if (a[0][j] == 1 & a[0][j-1] == 2 & a[0][j+1] == 2 & a[1][j] == 2) {
            dem += 1;
        }
        else if (a[m-1][j] == 1 & a[m-2][j] == 2 & a[m-1][j - 1] == 2 & a[m -1][j + 1] == 2) {
            dem += 1;
        }
    }
    if (a[0][0] == 1 & a[0][1]==2 &a[1][0] ==2 ) {
        dem += 1;
    }
    if (a[m-1][n-1] == 1 & a[m-2][n-1] == 2 & a[m-1][n-2] == 2) {
        dem += 1;
    }
    if (a[0][n-1] == 1 & a[1][n-1] == 2 & a[0][n-2] == 2) {
        dem += 1;
    }
    if (a[m-1][0] == 1 & a[m-2][0] == 2 & a[m-1][1] == 2) {
        dem += 1;
    }
    if (dem != 0) {
        cout << "YES";
    }
    else { cout << "NO"; }
    return 0;
}
