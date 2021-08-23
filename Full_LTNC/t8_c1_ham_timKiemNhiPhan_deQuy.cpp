//
//Viết chương trình thực hiện hàm tìm kiếm nhị phân bằng đệ quy.
//Đầu vào là số nguyên n, n số nguyên trong dãy và số nguyên x cần tìm.
//Đầu ra là vị trí của x trong dãy; nếu không tìm được in ra -1.
//
//For example:
//
//Input	        Result
//5               3
//1 4 5 7 9
//7
//
//4               -1
//1 2 3 4
//5
//
#include <iostream>
#include <algorithm>
using namespace std;

int binarysearch (int L,int R,int x,int a[]){
    int mid=(L+R)/2;
    if(R>L){
    if(x==a[mid])return mid;
    else if(x>a[mid]) return binarysearch(mid+1,R,x,a);
    else if(x<a[mid]) return binarysearch(L,mid-1,x,a);}
    else return -1;
}

int main(){
    int n ;int x;
    int a[100];
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cin>>x;
    cout<<binarysearch(0,n-1,x,a);
}
