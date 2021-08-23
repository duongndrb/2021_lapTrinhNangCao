//Bài 6. Mảng 2 chiều.
//a. In ra tổng của mảng 2 chiều
//b. In ra tổng đường chéo chính, tổng đường chéo phụ
//c. Tìm ma trận con 2x2 có tổng lớn nhất.
//d. In ra hàng có tổng lớn nhất
//e. In ra cột có tổng lớn nhất

//--------------------------------------------------//

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h>

using namespace std;

#define MAX 100

void nhapMang2Chieu(int a[][MAX], int &dong, int &cot)
{
    //Nhap so dong
    do
    {
        cout << "Nhap so dong:" ;
        cin >> dong;
    }while(dong < 1 || dong >MAX);

    // Nhap so cot
    do
    {
        cout << "Nhap so cot:" ;
        cin >> cot;
    }while(cot < 1 || cot >MAX);

    // Nhap so
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            cout << "nhap so a[" << i << "][" << j << "]:" ;
            cin >> a[i][j];
        }
    }
}

void xuatMang2Chieu(int a[][MAX], int dong, int cot)
{
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            cout << a[i][j] << " " ;
        }
        cout << endl;
    }
}

//Phan a: in ra tong cua mang 2 chieu
void tongMang2Chieu(int a[][MAX], int dong, int cot)
{
    int tong = 0;
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            tong += a[i][j];
        }
    }
    cout << "Tong cua mang 2 chieu: " << tong << endl;
}

//Phan b: in ra tong duong cheo chinh
void tongDuongCheoChinh(int a[][MAX], int dong, int cot)
{
    int tongCheoChinh = 0;
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            if(i == j)
                tongCheoChinh += a[i][j];
        }
    }
    cout << "Tong cua duong cheo chinh mang 2 chieu: " << tongCheoChinh << endl;
}

//Phan c: in ra tong duong cheo phu
void tongDuongCheoPhu(int a[][MAX], int dong, int cot)
{
    int tongCheoPhu = 0;
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            if(j == dong-1-i)
                tongCheoPhu += a[i][j];
        }
    }
    cout << "Tong cua duong cheo phu mang 2 chieu: " << tongCheoPhu << endl;
}

//Phan d: ma tran con 2x2 co tong lon nhat
//void tongMaTranCon22(int a[][MAX], int dong, int cot)
//{
//
//    int n = (dong-1)*(cot-1);
//    int tongMaTranCon[n] = 0;
//    int so[1][2];
//    for(int i = 0; i < dong-3; i++)
//    {
//        for(int j = 0; j < cot-3; j++)
//        {
//            tongMaTranCon[dong+cot] = a[i][j] + a[i][j+1] + a[i+1][j] + a[i+1][j+1];
//            tongMaTranCon[dong+cot+1] = a[i+1][j+1] + a[i+1][j+2] + a[i+2][j+1] + a[i+2][j+2];
//            if(tongMaTranCon[dong+cot] > tongMaTranCon[dong+cot+1])
//                tongMaTranCon[dong+cot+1] = tongMaTranCon[dong+cot];
//                so[0][0] = dong;
//                so[0][1] = cot;
//        }
//    }
//    cout << "ma tran 2x2 co tong lon nhat: " <<  << endl;
//}

//Phan e: In ra hang co tong lon nhat
int tongHang(int a[][MAX], int i, int n)
{
    long hang = 0;
    for(int j = 0; j < n; j++)
    {
        hang = hang + a[i][j];
    }
    return hang;
}
int tongHangMax(int a[][MAX], int dong, int cot)
{
    int i, d;
    int maxHang = tongHang(a,0,cot);
    for(int i = 0; i<dong; i++)
    {
        int t = tongHang(a,i,cot);
        if(maxHang<t)
        {
            maxHang = t;
            d = i;
        }
    }
    return d+1;
}

//Phan f: In ra cot co tong lon nhat
int tongCot(int a[][MAX], int m, int i)
{
    long cot = 0;
    for(int j = 0; j < m; j++)
    {
        cot = cot + a[j][i];
    }
    return cot;
}
int tongCotMax(int a[][MAX], int dong, int cot)
{
    int i, d;
    int maxCot = tongCot(a,dong,0);
    for(int i = 0; i<dong; i++)
    {
        int t = tongCot(a,dong,i);
        if(maxCot<t)
        {
            maxCot = t;
            d = i;
        }
    }
    return d+1;
}


int main()
{
    int dong, cot;
    int a[MAX][MAX];
    nhapMang2Chieu(a,dong, cot);
    xuatMang2Chieu(a,dong,cot);
    tongMang2Chieu(a,dong,cot);
    tongDuongCheoChinh(a,dong,cot);
    tongDuongCheoPhu(a,dong,cot);

    cout << "Hang co tong lon nhat: " << tongHangMax(a,dong,cot) << endl;
    cout << "Cot co tong lon nhat: " << tongCotMax(a,dong,cot) << endl;
    return 0;
}
