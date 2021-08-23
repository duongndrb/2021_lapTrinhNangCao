//
//cho n, cùng dãy số A (có n phần tử) và dãy số B (có n+1 phần tử).
//Tìm và in ra phần tử duy nhất có trong B nhưng không có trong A.
//
//
//
//For example:
//
//Input	        Result
//5               7
//1 1 2 3 4
//2 3 4 7 1 1
//
//3               3
//2 2 5
//5 2 3 2
//-----------------------------------------------------------------//
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n+1];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n+1; i++)
    {
        cin >> b[i];
    }
    sort(b, b+n+1);
    sort(a, a+n);
    for(int i = 0; i < n+1; i++)
    {
        if(i == n)
        {
            cout << b[i];
            return 0;
        }
        else
        {
            if(a[i] != b[i])
            {
                cout << b[i];
                return 0;
            }
        }
    }
    return 0;
}

// CACH KHAC: TINH TONG KHAC
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int* a = new int[n];
    int* b = new int[n + 1];
    int tonga = 0;
    int tongb = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        tonga = tonga + a[i];
    }
    for (int i = 0; i < n + 1; i++)
    {
        cin >> b[i];
        tongb = tongb + b[i];
    }
//tongb=tongb+b[n];
    cout << tongb - tonga;

    return 0;
}
