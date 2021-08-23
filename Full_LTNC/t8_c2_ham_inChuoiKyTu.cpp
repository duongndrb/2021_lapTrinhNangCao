//Cho tập các chữ cái {‘a', ‘b', ‘c', ‘d'}.
//Liệt kê tất các các chuỗi có 3 kí tự có thể được tạo thành từ tập 4 chữ cái trên.
//Chú ý rằng các chữ cái trong chuỗi 3 kí tự có thể giống nhau (như “aaa").
//
//For example:
//
//Result
//aaa aab aac aad aba abb abc abd aca acb acc acd ada adb adc add baa bab bac bad bba bbb bbc bb
//----------------------------------------------------------------------------------------------//
#include <iostream>
#include <math.h>

using namespace std ;

void abcd(string s){
    for(int i=0;i<s.length();i++){
        for(int j=0;j<s.length();j++){
            for(int k=0;k<s.length();k++){
                cout<<s[i]<<s[j]<<s[k]<<" ";
            }
        }
    }
}
int main(){
    string s="abcd";
    abcd(s);

}
