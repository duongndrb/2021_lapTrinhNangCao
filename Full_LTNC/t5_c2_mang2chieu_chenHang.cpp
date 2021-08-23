//Cho ma trận A kích thước m×n chứa các số nguyên, các hàng được đánh số từ 1 đến m, các cột được đánh số từ 1 đến n.
//Viết chương trình nhập vào 2 số nguyên i và x.
//Sau đó, chèn thêm vào ma trận A một hàng ở vị trí thứ i với tất cả các phần tử có hàng đó bằng x.
//
//Đầu vào
//Đầu vào từ bàn phím gồm m+2 dòng:
//
//Dòng đầu tiên chứa 2 số nguyên m,n(m,n≤1000).
//m dòng tiếp theo mỗi dòng chứa n số nguyên biểu diễn ma trận đã cho, các số liên tiếp nhau trên một dòng cách nhau bởi một dấu cách.
//Dòng tiếp theo chứa 2 số nguyên i,x.
//
//Đầu ra
//In ra màn hình m+1 dòng biểu diễn ma trận sau khi đã thêm hàng ở vị trí thứ i, các số liên tiếp nhau trên một dòng cách nhau bởi một dấu cách.
//
//
//For example:
//
//Input	    Result
//3 3         1 2 3
//1 2 3       3 3 3
//4 5 6       4 5 6
//2 3 4       2 3 4
//2 3
//------------------------------------------------------------------------------------------------------------------------------------------//

#include <iostream>

using namespace std;
int main(){
    int m, n; cin >> m >> n;
    int a[m][n], b[m+1][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int index, x;
    cin >> index >> x;
    for(int i = 0; i < index-1; i++){
        for(int j = 0; j < n; j++){
            b[i][j] = a[i][j];
        }
    }
    for(int j = 0; j < n; j++){
        b[index-1][j] = x;
    }
    for(int i = index; i < m+1; i++){
        for(int j= 0; j < n; j++){
            b[i][j] = a[i-1][j];
        }
    }
    for(int i = 0; i < m+1; i++){
        for(int j = 0; j < n; j++){
            cout << b[i][j] << " ";
            //cout <<endl;
        }
        cout <<endl;
    }

}

