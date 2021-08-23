//Có hai con kangaroo, với các vị trí xuất phát và tốc độ nhảy của chúng, nhảy về cùng hướng.
//Hỏi chúng có bao giờ gặp nhau không?
//
//Nhập vào lần lượt ví trí và tốc độ nhảy của từng con kangaroo. In ra "yes" hoặc "no".
//
//For example:
//
//Input	    Result
//0 3 4 2     yes
//
//0 2 5 3     no
//-------------------------------------------------------------------------------------------//

//Có hai con kangaroo, với các vị trí xuất phát và tốc độ nhảy của chúng, nhảy về cùng hướng. Hỏi chúng có bao giờ gặp nhau không?
//
//Nhập vào lần lượt ví trí và tốc độ nhảy của từng con kangaroo. In ra "yes" hoặc "no"

#include <iostream>
#include <math.h>

using namespace std;

void gapNhau(int vitri1, int tocdo1, int vitri2, int tocdo2)
{
    int khoangcach1 = vitri1;
    int khoangcach2 = vitri2;
    int n = 100;
    bool gapnhau = 0;
    for(int i = 0; i <= n; i++)
    {
        khoangcach1 = khoangcach1 + tocdo1;
        khoangcach2 = khoangcach2 + tocdo2;
        if(khoangcach1 == khoangcach2)
        {
            gapnhau = 1;
        }
        else
        {
            gapnhau = gapnhau;
        }
    }
    if(gapnhau == 0)
    {
        cout << "no";
    }
    else
    {
        cout << "yes";
    }
}

int main()
{
    int vitri_1;
    int vitri_2;
    int tocdo_1;
    int tocdo_2;
    cin >> vitri_1 >> tocdo_1 >> vitri_2 >> tocdo_2;
    gapNhau(vitri_1,tocdo_1,vitri_2, tocdo_2);

}

