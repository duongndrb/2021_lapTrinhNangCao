//Với struct Student_info,
//viết chương trình chỉnh sửa hàm vector<Student_info> extract_fail(const vector<Student_info>&)
//để khi mỗi lần thêm 1 sinh viên trượt vào vector danh sách các sinh viên trượt(vector<Student_info> fail)
//thì sinh viên đó cũng bị xóa khỏi danh sách students.
//Nghĩa là danh sách students chỉ chứa các sinh viên đỗ,
//còn danh sách fail chỉ chứa các sinh viên trượt.
//Sau đó in ra danh sách các sinh viên trong danh sách students theo thứ tự điểm giảm dần,
//nếu không có sinh viên nào thì in ra 0.
//
//For example:
//
//Input	    Result
//1           minh
//minh 10
//
//2           minh
//nam 10      cong
//cong 8
//
//------------------------------------------------------------------------------------------------------//

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
    xuatdanhsach(sv,n);

     for(int i =0;i<n;i++){
         for(int j=i+1;j<n;j++){
            if(sv[i].ten[0] > sv[j].ten[0]){
                swap(sv[i],sv[j]);
           }
         }
    }
    int dem=0;
    for(int i=0;i<n;i++){
        if(sv[i].diem <4){
            //cout<<sv[i].ten<<endl;
            dem+=1;
        }
    }
    //if(dem==0){
    //    cout<<0;
    //}
    //cout<<sv[0].ten[0];
    //xuatdanhsach(sv,n);
    return 0;
}
