//Nhập vào mảng các số với dòng đầu là số phần tử, và dòng sau là dãy giá trị.
//Sau đó in ra các phần tử của mảng theo thứ tự đảo ngược lại so với ban đầu.
//
//For example:
//
//Input	Result
//5       1 2 3 4 5
//        5 4 3 2 1
//3       5 2 8
//        8 2 5
//---------------------------------------------------------------------------//
#include <iostream>
using namespace std;
int main()
{
    int N, i;
    int a[100];
    cin >> N;
    for(i = 0; i<N; i++)
    {
         cin >> a[i];
    }
for(i = N-1; i>-1; i--)
    {
         cout << a[i] << " ";
    }
}
