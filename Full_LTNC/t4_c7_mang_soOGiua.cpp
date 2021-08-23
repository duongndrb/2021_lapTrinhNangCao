//Cho tập A = {a_0, …, a_n} và tập B = {b_0, …, b_m}.
//Một số x được gọi là ‘ở giữa’ nếu x chia hết cho mọi phần tử a_i của tập A,
//đồng thời mọi phần tử b_k của tập B chia hết cho x.
//Với 2 tập A và B, tìm và in ra số các số ‘ở giữa” chúng.
//
//For example:
//
//Input	    Result
//2 3         3
//2 4
//16 32 96
//
//1 3         1
//2
//20 30 12
//
//--------------------------------------------------------------------------//
#include<iostream>
using namespace std;
int USCLN(int a, int b)
{
    if (b == 0) return a;
    return USCLN(b, a % b);
}
int BSCNN(int a, int b)
{
    return (a * b) / USCLN(a, b);
}

int main()
{
    int m,n;
    cin>>m>>n;
    int a[m];
    int b[n];

    int bca=1;

    for(int i=0; i<m; i++)
    {
        cin>>a[i];
        bca=BSCNN(bca,a[i]);
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    int ucb=b[0];
    for(int i=0; i<n; i++)
    {
        ucb=USCLN(ucb,b[i]);
    }
    int dem=0;
    if(ucb<bca)cout<<0<<endl;
    else
    {
        int demk=1;
        while(1)
        {
            int hs=bca*demk;
            if(ucb%hs==0)dem++;
            demk++;
            if(hs>ucb)break;

        }
    }
    cout<<dem<<endl;

}
