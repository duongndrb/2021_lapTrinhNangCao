//Bài 1. Hãy viết struct Student có các thuộc tính hoTen, diemToan, diemVan, diemAnh.
//Điểm trung bình = (diemToan + diemVan + diemAnh) / 3.
//Hãy viết các hàm sau:
//●	Khởi tạo không có tham số, khởi tạo có 3 tham số
//●	Nhập 1 Sinh viên (operator>>).
//●	In Sinh Viên (operator<<) theo định dạng hoTen - điểm trung bình, làm tròn 2 chữ số sau dấu phẩy.
//●	Viết phép toán tính điểm trung bình cho các sinh viên.
//●	Viết phép toán so sánh để so sánh 2 sinh viên theo điểm trung bình (operator<). Nếu điểm TB bằng nhau thì so sánh theo điểm Toán.
//●	Sắp xếp 1 danh sách sinh viên theo chiều giảm dần của điểm trung bình.
//Sau đó viết hàm main để đọc vào 1 danh sách Student có n phần tử, in ra top 3 sinh viên có điểm trung bình cao nhất từ trên xuống dưới.
//
//--------------------------------------------------------------------------------------------------------------------------------------//

#include <iostream>
#include <string.h>
#include <stdio.h>
#include<conio.h>
#include <bits/stdc++.h>
#include <math.h>
#define MAX 100
using namespace std;

struct Student{
    char HoTen[30];
    struct Diem* diem;
};

struct Diem{
    float diemToan, diemVan, diemAnh;
    float diemTB;
};

void xuatSinhVien(struct Student* students, int n)
{
    for(int i = 0; i<n; i++)
    {
        struct Student* currentStudent = students + i;
        cout << currentStudent->HoTen << " - " <<setprecision(2)<<fixed<< currentStudent->diem->diemTB <<endl;
    }
}
void diemTrungBinh(struct Student* students,int n)
{
    for(int i = 0; i<n; i++)
    {
        struct Student* currentStudent = students + i;
        currentStudent->diem->diemTB = (currentStudent->diem->diemToan+currentStudent->diem->diemVan+currentStudent->diem->diemAnh)/3;
    }
}
void nhapSinhVien(struct Student* students, int n)
{
    int i;
    for(i = 0; i<n; i++)
    {
        struct Student* currentStudent = students + i;
        fflush(stdin); gets(currentStudent->HoTen);
        currentStudent->diem =(struct Diem*) malloc(sizeof(struct Diem*));
        cin >> currentStudent->diem->diemToan;
        cin >> currentStudent->diem->diemVan;
        cin >> currentStudent->diem->diemAnh;
    }
}

void sapXepTheoDiemTB(struct Student* students, int n)
{
    int i,j;
    for(int i=0; i< n-1; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            struct Student* si = students + i;
            struct Student* sj = students + j;
            si->diem->diemTB = (si->diem->diemToan + si->diem->diemAnh + si->diem->diemVan)/3;

            sj->diem->diemTB = (sj->diem->diemToan + sj->diem->diemAnh + sj->diem->diemVan)/3;
            if(si->diem->diemTB < sj->diem->diemTB){

                struct Student temp = *si;//* la gia tri
                *si = *sj;
                *sj = temp;
            }
        }
    }
    xuatSinhVien(students,3);
}


int main()
{

    int soluongSV;cin >> soluongSV;
    struct Student* students = NULL;

    students = (struct Student*)malloc(sizeof(struct Student*));
    nhapSinhVien(students,soluongSV);
    sapXepTheoDiemTB(students,soluongSV);
    return 0;
}

