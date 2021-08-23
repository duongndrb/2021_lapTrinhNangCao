//Tất cả các câu trong bài này đều phải dùng con trỏ để xử lý mảng/xâu,
//KHÔNG dùng thư viện C++string, hay cstring,
//hãy tự viết lấy các hàm bạn cần sử dụng, chẳng hạn strlen, strcpy...
//Viết chương trình gồm các hàm sau đây:
//
//1,Đảo xâu.
//    Viết một hàm reverse(char a[]) với nhiệm vụ đảo ngược thứ tự của a).
//2,Xóa kí tự.
//    Viết hàm delete_char(char a[], char c) với nhiệm vụ xóa hết các kí tự c trong xâu a.
//3,Độn phải.
//    Viết hàm pad_right(char a[], int n) với nhiệm vụ độn thêm các kí tự space vào cuối xâu a để a có độ dài bằng n.
//    Nếu a đã dài quá n thì không phải làm gì cả.
//4,Độn trái.
//    Viết hàm pad_left(char a[], int n) với nhiệm vụ độn thêm các kí tự space vào đầu xâu a để a có độ dài bằng n.
//    Nếu a đã dài quá n thì không phải làm gì cả.
//5,Cắt xâu.
//    Viết hàm truncate(char a[], int n) với nhiệm vụ cắt bớt đoạn cuối của xâu a để a có độ dài n nếu như a đang dài quá n kí tự
//6,Đối gương.
//    Viết hàm bool is_palindrome(char a[]) với nhiệm vụ kiểm tra xem xâu a có đối xứng hay không.
//    Trả về true nếu đối xứng, false nếu không.
//7,Lọc trái.
//    Viết hàm trim_left(char a[]) với nhiệm vụ xóa các kí tự trắng đứng ở đầu xâu a, nếu có.
//8,Lọc phải.
//    Viết hàm trim_right(char a[]) với nhiệm vụ xóa các kí tự trắng đứng ở cuối xâu a, nếu có.
//Đầu vào: Nhập vào từ bàn phím 2 dòng:
//    Dòng đầu chứa một xâu ký tự
//    Dòng thứ hai chứa số nguyên n
//Đầu ra: Kết quả theo thứ tự của các hàm yêu cầu trên

//Input	                Result
//  daihoccongnghe        ehgngnoccohiad
//20                        daihoongnghe
//                          daihoccongnghe
//                              daihoccongnghe
//                          daihoccongnghe
//                        false
//                        daihoccongnghe
//                          daihoccongnghe

//---------------------------------------------------------------------------------//
#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

string reverse(string a,int len){
    for(int i=len-1;i>=0;i--){
        cout<<a[i];
    }

    return a;
}

string delete_char(string a, char c){
    vector<char> dlt;
    for(int i =0;i<a.length();i++){
        if(a[i]!=c){
            dlt.push_back(a[i]);
        }

    }
    //cout<<dlt;
     for(int i=0;i<dlt.size();i++){
         cout<<dlt[i];
     }
    return a;
}

void pad_right(string a,int n){
    vector<char> pright;
    for(int i=0;i<a.length();i++){
        pright.push_back(a[i]);
    }
    if(n>a.length()){
        for(int i=0;i<n-a.length();i++){
            pright.push_back(' ');
        }
    }
    for(int i=0;i<pright.size();i++){
        cout<<pright[i];
    }
}

void pad_left(string a,int n){
    vector<char> pleft;
    if(n>a.length()){
    for(int i=0;i<n-a.length();i++){
        pleft.push_back(' ');
    }
}
    for(int i=0;i<a.length();i++){
        pleft.push_back(a[i]);
    }

    for(int i=0;i<pleft.size();i++){
        cout<<pleft[i];
    }
}

void truncate(string a,int n){
    vector<char> cut;
    if(a.length() >n){
    for(int i=0;i<a.length()-n;i++){
        cut.push_back(a[i]);
    }
    for(int i=0;i<cut.size();i++){
        cout<<cut[i];
    }
  }
  else{
      cout<<a;
  }
}

void is_palindrome(string a){
    vector<char> pal ;
    int l=a.length();
    for(int i=0;i<a.length();i++){
        pal.push_back(a[l-i-1]);
        //cout<<pal[i];
    }
    // for(int i=0;i<a.length();i++){
    //     cout<<pal[i];
    // }
    int dem=0;
    for(int i=0;i<a.length();i++){
        if(a[i]==pal[i]){
            dem+=1;
        }
    }
    //cout<<dem;
    if(dem==l){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
void trim_left(string a){
    vector<char> tl;
    for(int i=0;i<a.length();i++){
        if(a[i]!=' '){
            tl.push_back(a[i]);
        }
    }
    for(int i=0;i<tl.size();i++){
        cout<<tl[i];
    }
}

void trim_right(string a){
    vector<char> tr;
    for(int i=0;i<a.length();i++){

            tr.push_back(a[i]);

    }
    int demtr = 0;
    for(int i = tr.size();i>=0;i--){
        if(tr[i]==' '){
            demtr+=1;
        }
        else{
            break;
        }
    }
    for(int i=0;i<demtr;i++){
        tr.pop_back();
    }
    for(int i=0;i<tr.size();i++){
        cout<<tr[i];
    }
}

int main(){
    string a;
    getline(cin,a);
    int n;
    cin>>n;
    int len = a.length();
    reverse(a,len);
    cout<<endl;
    delete_char(a,'c');
    cout<<endl;
    pad_right(a,n);
    cout<<endl;
    pad_left(a,n);
    cout<<endl;
    truncate(a,n);
    cout<<endl;
    is_palindrome(a);
    cout<<endl;
    trim_left(a);
    cout<<endl;
    trim_right(a);
    cout<<endl;
    return 0;
}
