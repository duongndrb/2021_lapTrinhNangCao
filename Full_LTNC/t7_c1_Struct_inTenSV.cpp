//Viết 1 chương trình quản lý sinh viên.
//sử dụng cấu trúc(struct) Student_info để lưu trữ thông tin mỗi sinh viên, gồm các thuộc tính tên và điểm.
//Sử dụng vector students (vector<Student_info students>) để lưu trữ danh sách các thông tin sinh viên (Student_info).
//In ra danh sách sinh viên theo thứ tự bảng chữ cái.
//Đầu vào gồm số n là số sinh viên, n dòng tiếp theo là tên và điểm của mỗi sinh viên
//For example:
//
//Input	Result
//1       minh
//minh 10
//
//2       cong
//nam 10  nam
//cong 8
//
//--------------------------------------------------------------------------------------------------------------------//

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
    //cout<<sv[0].ten[0];
    xuatdanhsach(sv,n);
    return 0;
}
