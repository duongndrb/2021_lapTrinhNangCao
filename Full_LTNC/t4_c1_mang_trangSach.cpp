//Quyển sách có n trang (với trang đầu tiên đánh số 1, ở bên phải, các trang số chẵn bên trái, trang số lẻ bên phải).
//Mỗi lần lật được 1 trang.
//Có thể bắt đầu lật từ trang đầu tiên (số 1)  xuống hay ngược lại trừ trang cuối cùng lên.
//Hỏi nếu cần đọc trang p, cần lật ít nhất bao nhiêu trang ?
//Nhập vào số n và p, in ra kết quả bài toán
//
//For example:
//
//Input	Result
//6       1
//2
//
//5       0
//4
//
//-----------------------------------------------------------------------------------------------------------------//
#include <iostream>
using namespace std;

int main()
{
    int n, p;
    cin >> n >> p;
    int left = p/2;
    int right = (n-p)/2;

    if(left < right) cout << left;
    else cout << right;
    return 0;
}
