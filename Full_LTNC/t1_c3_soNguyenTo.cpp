//Cho số nguyên N.
//Nhập vào N số nguyên và kiểm tra xem có bao nhiêu số nguyên tố.
//
//For example:
//
//Input	    Result
//5           3
//1 2 3 4 5
//
//3           0
//4 6 8
//--------------------------------------------------------------//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[100];
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }
    int du=0;
    int count = 0;
    for(int i= 0; i <n; i++)
    {
        if (a[i] < 2) count = count;
        else
        {
            for(int j=2; j<a[i]; j++)
            {
                if (a[i]%j==0)
                {
                    du++;
                }
            }
            if (du==0)
            {
                count++;
            }
            else
            {
                count=count;
            }
        }
        du=0;
    }
    cout << count;
}

