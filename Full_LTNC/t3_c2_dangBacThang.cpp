//Đọc vào số n; In ra các dấu “#” theo dạng bậc thang với n hàng.
//
//For example:
//
//Input	Result
//3         #
//         ##
//        ###
//
//2         #
//         ##
//--------------------------------------------------------------//

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            cout<<" ";
        }
        for(int j=n-i-1; j<n; j++)
        {
            cout<<"#";
        }
        cout<<endl;
    }
}


