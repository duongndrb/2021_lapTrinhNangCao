#include <bits/stdc++.h>

using namespace std;

#define ROW 100
#define COL 100

int sum_value(int a[][COL], int m, int n) {
    int res = 0;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            res+=a[i][j];
        }
    }
    return res;
}

void sum_main_diagonal(int a[][COL], int m, int n) {
    int res = 0;
    if (m==n) {
        for (int i=0; i<m; i++) {
            res += a[i][i];
        }
        cout << res << endl;
    }
    else
        cout << "Khong co duong cheo chinh" << endl;
}

void sum_auxiliary_diagonal(int a[][COL], int m, int n) {
    int res = 0;
    if (m==n) {
        for (int i=0; i<m; i++) {
            res += a[m-1-i][i];
        }
        cout << res << endl;
    }
    else
        cout << "Khong co duong cheo phu" << endl;
}

void max_sum_2x2(int a[][COL], int m, int n) {
    int res = -2147483648;
    int max_index_row = 0;
    int max_index_col = 0;
    for (int i=0; i<m-1; i++) {
        for (int j=0; j<n-1; j++) {
            int temp = a[i][j] + a[i][j+1] + a[i+1][j] + a[i+1][j+1];
            if (temp > res) {
                res = temp;
                max_index_row = i;
                max_index_col = j;
            }
        }
    }
    cout << a[max_index_row][max_index_col] << ' ' << a[max_index_row][max_index_col+1] << endl
        << a[max_index_row+1][max_index_col] << ' ' << a[max_index_row+1][max_index_col+1] << endl;
    cout << res << endl;
}

void max_sum_row(int a[][COL], int m, int n) {
    int res = -2147483648;
    int max_index_row = 0;
    for (int i=0; i<m; i++) {
        int temp = 0;
        for (int j=0; j<n; j++) {
            temp += a[i][j];
        }
        if (temp > res) {
            res = temp;
            max_index_row = i;
        }
    }
    for (int j=0; j<n; j++) {
        cout << a[max_index_row][j] << ' ';
    }
    cout << endl;
    cout << res << endl;
}

void max_sum_column(int a[][COL], int m, int n) {
    int res = -2147483648;
    int max_index_col = 0;
    for (int j=0; j<n; j++) {
        int temp = 0;
        for (int i=0; i<m; i++) {
            temp += a[i][j];
        }
        if (temp > res) {
            res = temp;
            max_index_col = j;
        }
    }
    for (int i=0; i<m; i++) {
        cout << a[i][max_index_col] << endl;
    }
    cout << res << endl;
}

int main() {
    int m, n; cin >> m >> n;
    int a[ROW][COL];
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cin >> a[i][j];
        }
    }
//    cout << sum_value(a,m,n) << endl;
//    sum_main_diagonal(a,m,n);
//    sum_auxiliary_diagonal(a,m,n);
//    max_sum_2x2(a,m,n);
//    max_sum_row(a,m,n);
    max_sum_column(a,m,n);
}
