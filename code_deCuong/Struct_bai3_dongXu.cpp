#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct DongXu
{
    int dong, xu;
    DongXu()
    {
        dong = 0;
        xu = 0;
    }
    DongXu(int dong_, int xu_)
    {
        dong = dong_;
        xu = xu_;
    }
    DongXu operator+(DongXu d)
    {
        DongXu temp;
        temp.dong = dong + d.dong;
        temp.xu = xu + d.xu;
        return temp;
    }
    DongXu operator-(DongXu d)
    {
        DongXu temp;
        temp.dong = dong - d.dong;
        temp.xu = xu - d.xu;
        return temp;
    }
    void quyChuan(DongXu& d)
    {
        if (d.xu > 100)
        {
            d.dong += d.xu / 100;
            d.xu = d.xu % 100;
        }
    }
    bool operator>(DongXu d)
    {
        if (dong != d.dong)
            return dong > d.dong;
        return xu > d.xu;
    }
};

istream& operator>>(istream& is, DongXu& d);
ostream& operator<<(ostream& os, const DongXu& d);
DongXu tong(DongXu a[], int n);
void sort_dongxu(DongXu a[], int n);

bool compare(DongXu a, DongXu b)
{
    return a > b;
}

int main()
{
    int n;
    cin >> n;
    DongXu input[n];
    for (int i=0; i<n; i++)
    {
        cin >> input[i];
    }
    cout << "Tong: " << tong(input, n);
    sort_dongxu(input, n);
    for (int i=n-1; i>=0; i--)
        cout << input[i];
}

istream& operator>>(istream& is, DongXu& d)
{
    is >> d.dong >> d.xu;
    d.quyChuan(d);
}

ostream& operator<<(ostream& os, const DongXu& d)
{
    os << d.dong << " dong " << d.xu << " xu\n";
}

DongXu tong(DongXu a[], int n)
{
    DongXu temp;
    for (int i=0; i<n; i++)
        temp = temp + a[i];
    return temp;
}

void sort_dongxu(DongXu a[], int n)
{
    sort(a, a+n, compare);
}
