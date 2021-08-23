//Chỉ số khối cơ thể - thường được biết đến với chữ viết tắt BMI theo tên tiếng Anh Body Mass Index - được dùng để đánh giá mức độ gầy hay béo của một người.
//Gọi W là cân nặng của một người (tính bằng kg) và H là chiều cao của người đó (tính bằng m), chỉ số khối cơ thể được tính theo công thức: BMI=WH2.
//Hãy viết chương trình tính chỉ số BMI khi biết cân nặng và chiều cao.
//
//Đầu vào
//    Đầu vào từ bàn phím gồm một dòng duy nhất chứa 2 số thực, cách nhau bởi một dấu cách, là cân nặng và chiều cao của một người.
//
//Đầu ra
//    In ra màn hình chỉ số BMI của người đó (làm tròn đến 2 chữ số thập phân sau dấu phẩy).
/////////////////////////////////
#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double w, h; cin >> w >> h;
    double bmi;
    bmi = w/(h*h);
    cout << setprecision(2) << fixed << bmi;
}
