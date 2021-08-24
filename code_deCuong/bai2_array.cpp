#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    int cnt[11];
    for(int i=0;i<11;i++) cnt[i]=0;
    for (int i=0;i<n;i++) cnt[a[i]]++;
    for (int i=0;i<11;i++) {
        if (cnt[i]!=0) {
            cout << "Con vit so " << i + 10 << " xuat hien " << cnt[i] << " lan" << endl;
        }
    }
    return 0;
}