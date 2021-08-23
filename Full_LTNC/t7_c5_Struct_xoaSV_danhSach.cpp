//Với struct Student_info,
//viết chương trình xóa sinh viên theo tên.
//Sau khi nhập danh sách các sinh viên và điểm tương ứng.
//Nhập tên của 1 sinh viên, và xóa sinh viên đó ra khỏi danh sách.
//Nếu tìm thấy thì xóa khỏi danh sách và in tên và điểm của sinh viên đó.
//Nếu không tìm thấy thì in ra -1
//
//For example:
//
//Input	    Result
//1           10
//minh 10
//minh
//
//2           -1
//an 10
//cong 8
//minh
//
//----------------------------------------------------------------------//

#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
struct sinhvien{
    char ten[10];
    float diem;
};
void nhap1SV(sinhvien & sv){
    cin>>sv.ten;
    cin>>sv.diem;
}
void xuat1SV(sinhvien & sv){
   // cout<<sv.ten<<' '<<sv.diem<<endl;
    cout<<sv.ten<<endl;
}
void nhapdanhsach(sinhvien a[],int n){
    for(int i=0;i<n;i++){
        nhap1SV(a[i]);
    }

}
void xuatdanhsach(sinhvien a[],int n){
    for(int i=0;i<n;i++){
        xuat1SV(a[i]);
    }

}
int main(){
    int n;
    cin>>n;
    sinhvien sv[100];
    nhapdanhsach(sv,n);
    //xuatdanhsach(sv,n);

    //  for(int i =0;i<n;i++){
    //      for(int j=i+1;j<n;j++){
    //         if(sv[i].ten[0] > sv[j].ten[0]){
    //             swap(sv[i],sv[j]);
    //       }
    //      }
    // }
    //cout<<sv[0].ten[0];
   // xuatdanhsach(sv,n);
   char newten[10];
   cin>>newten;
   int dem=0;
   for(int i=0;i<n;i++){
       if(sv[i].ten[0] == newten[0]){
           cout<<sv[i].diem;
           dem+=1;
       }
   }
   if(dem==0){
       cout<<-1;
   }
    return 0;
}
