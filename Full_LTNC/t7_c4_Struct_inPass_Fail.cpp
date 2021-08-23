//Với struct Student_info, viết chương trình tìm kiếm các sinh viên theo điểm.
//Sau khi nhập danh sách các sinh viên và điểm tương ứng.
//Nhập số m là điểm cần tìm.
//Trả về danh sách các sinh viên có điểm bằng với điểm cần tìm theo thứ tự bảng chữ cái và in ra sinh viên đó đỗ hay trượt,
//nếu đỗ in ra "pass", nếu trượt in ra "fail". Nếu không tìm thấy sinh viên nào có điểm tương ứng, in ra -1
//
//For example:
//
//Input	    Result
//1           -1
//minh 10
//9
//
//4           nguyen pass
//nguyen 5    van pass
//binh 4
//an 6
//van 5
//5
//
//------------------------------------
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

     for(int i =0;i<n;i++){
         for(int j=i+1;j<n;j++){
            if(sv[i].ten[0] > sv[j].ten[0]){
                swap(sv[i],sv[j]);
           }
         }
    }
    int dem=0;
    int diemtim; cin >> diemtim;
    for(int i=0;i<n;i++){
        if(diemtim > 4)
        {
        if(sv[i].diem == diemtim){
            cout<<sv[i].ten<< " pass" <<endl;
            dem+=1;
        }
        }
        else
        {
            if(sv[i].diem == diemtim){
            cout<<sv[i].ten<< " fail" <<endl;
            dem+=1;
        }
        }
    }
    if(dem==0){
        cout<<"-1";
    }
    //cout<<sv[0].ten[0];
    //xuatdanhsach(sv,n);
    return 0;
}

