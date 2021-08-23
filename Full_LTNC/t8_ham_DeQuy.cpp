//Viết hàm đệ quy int factorial(int n) tính n!, với n là số nguyên dương.

int factorial (int n) {
    if(n==0) return 1;
    if(n==1) return 1;
    if(n>1) return  n*factorial(n-1);
}

// 2----------------------------------------
//Sử dụng đệ quy để viết hàm long fibonacci(int n) tính số fibonaci thứ n.
//
//Biết dãy fibonaci bắt đầu từ: 0 1 1 2 3 5 8 ...
//
//F(n) = F(n-1) + F(n-2)
//
//For example:
//
//Input	    Result
//5           3
//
//15          377
int fibonacci(int n){
    if(n == 1) return 0;
    if(n == 2) return 1;
    //int f2 = 1;
    //for(int i = 3; i < n; i++){
    if(n > 2) return  fibonacci(n-1) + fibonacci(n-2);

}
//3-------------------------------------
//Sử dụng để quy để viết hàm int power(int a, b) tính luỹ thừa b của cơ số a.
//
//Input: Nhập vào 2 số nguyên dương a và b.
//
//For example:
//
//Input	    Result
//2 10        1024

int power(int a, int b) {
    if(b == 0) return 1;
    if(b == 1) return a;
    if(b > 1) return a * power(a, b-1);
}
// 4 --------------------------------
//
//Dùng đệ quy viết hàm int gcd(int a, int b). Nhập vào 2 số nguyên dương và in ra ước chung lớn nhất của 2 số đó
//
//For example:
//
//Input	    Result
//30 40       10

int gcd(int a, int b) {
    if(a == b) return a;
    else if(a > b) return a-b;
    else return b-a;
}
