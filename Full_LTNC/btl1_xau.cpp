//Giới thiệu bài toán
//Nếu bạn đã đọc một cuốn sách đố vui, bạn chắc chắn sẽ biết trò chơi tìm từ. Mục đích
//của trò chơi này là để tìm thấy một danh sách các từ được ẩn trong một ma trận chữ
//cái. Các chữ cái trong ma trận chữ cái thường được bố trí có vẻ giống như một thứ tự
//ngẫu nhiên, ngoại trừ các từ ẩn cần tìm. Các chữ cái trong các từ ẩn được sắp xếp trên
//một đường thẳng theo chiều ngang, dọc hoặc đường chéo 45 hoặc 135 độ trong ma
//trận chữ cái và theo hướng bất kỳ. Các người chơi cần tìm một danh sách các từ mục
//tiêu trong ma trận chữ cái đó.
//Dữ liệu vào:
//Chương trình sẽ đọc dữ liệu từ bàn phím (standard input) hoặc từ file. Dữ liệu này
//được định dạng như sau:
//- Dòng đầu ghi hai số M, N là kích thước của ma trận chữ cái. Các dòng của ma trận
//chữ cái được đánh số từ 1 đến M và các cột được đánh số từ 1 đến N (2 ≤ M ,N ≤ 100).
//- Mỗi dòng trong M dòng tiếp theo ghi N chữ cái (chữ in thường), trong đó chữ cái thứ j
//trên dòng thứ i thể hiện chữ cái trong ô (i,j) của ma trận chữ cái.
//- Dòng tiếp theo ghi số K là số từ mà chương trình cần tìm ( 2 ≤ K ≤ 100 )
//- Mỗi dòng trong K dòng tiếp theo ghi một từ cần tìm. Một từ cần tìm hợp lệ chỉ bao
//gồm các chữ cái (chữ in thường). Tuy nhiên người dùng có thể yêu cầu tìm từ chứa
//chữ số, dấu cách, và các dấu câu.
//Kết quả ra:
//Kết quả trả về được đưa ra màn hình (standard output). Tương ứng với mỗi từ cần tìm
//là một câu trả lời. Câu trả lời có các định dạng sau:
//- Nếu từ trong câu hỏi có chứa chữ số, dấu cách, và các dấu câu thì chương trình in ra
//là: input error
//- Nếu chương trình không tìm thấy từ được hỏi trong ma trận thì in ra là: not found
//- Nếu chương trình tìm thấy từ được hỏi trong ma trận thì in ra bốn chữ số [(x1 , y1) (x2
//,y2)] thể hiện rằng từ đó được tìm thấy dọc theo đoạn từ ô (x1 , y1 ) đến ô ( x2 , y2 )
//trên ma trận chữ cái.
//Các số này cách nhau đúng một dấu cách. Nếu tồn tại nhiều hơn một vị trí mà từ cần
//tìm xuất hiện thì chỉ cần in ra một cách bất kỳ.
//- Chương trình có thể trả lời ngay khi đọc xong từng từ cần tìm hoặc đọc hết các từ cần
//tìm rồi đưa ra câu trả lời.
//
//
//For example:
//
//Input	            Result
//12 12               6 3 6 7
//delfkcgktmaq        input error
//xyiylkqxszgj        not found
//gyppahfhpbod
//cmfiorvdrwre
//aigufhzuieet
//zuhellotzrlg
//cjjrbfluejqd
//bgvfrcfyyyoj
//mydssaskzfro
//apwrgwqahgwr
//lfctvsrjeosg
//npiglcclmpjx
//3
//hello
//he2there
//cannon
//
//
//3 5                 1 1 1 5
//goose               3 1 3 4
//senmn
//farmo
//2
//goose
//farm
//
//-------------------------------------------//

#include <iostream>
#include <string>

using namespace std;
bool check(string s){
    int dem=0;
    for (int i=0;i<s.length();i++){
        if ((int)s[i]<97||(int)s[i]>122){dem++;}
        }
    if (dem!=0) return false;
    else return true;
}
int main()
{
    int m,n;
    cin>>m>>n;
    char a[m][n];
    for (int x=0;x<m;x++)
        for (int y=0;y<n;y++)
            cin>>a[x][y];
    int k;cin>>k;
    for(int l=0;l<k;l++)
    {
        string s;
        cin>>s;
        int key=0;
        if (check(s)){
            for (int x=0;x<m;x++){
                for (int y=0;y<n;y++){
                    if (a[x][y]==s[0])
                    {   //trai phai
                        if(n>=s.length()+y){
                            string s1;
                            for (int i=0;i<s.length();i++){
                                s1=s1+a[x][y+i];
                            }
                            if (s1==s){cout<<x+1<<" "<<y+1<<" "<<x+1<<" "<<y+s.length()<<endl;key++;}
                        }
                        //trai phai xuyen
                        if(n<s.length()+y){
                                string s1;
                            for (int i=0;i<n-y;i++)
                            {
                                s1=s1+a[x][y+i];
                            }
                            for (int i=0;i<s.length()+y-n;i++)
                            {
                                s1=s1+a[x][i];
                            }
                            if (s1==s){cout<<x+1<<" "<<y+1<<" "<<x+1<<" "<<y-n+s.length()<<endl;key++;}
                        }
                        //phai trai
                        if(y+1>=s.length()){
                            string s1;
                            for (int i=0;i<s.length();i++){
                                s1=s1+a[x][y-i];
                            }
                            if (s1==s){cout<<x+1<<" "<<y+1<<" "<<x+1<<" "<<y+2-s.length()<<endl;key++;}
                        }
                        //phai trai xuyen
                        if(y+1<s.length()){
                            string s1;
                            for (int i=0;i<=y;i++){
                                s1=s1+a[x][y-i];
                            }
                            for (int i=0;i<s.length()-y-1;i++){
                                s1=s1+a[x][n-i-1];
                            }
                            if (s1==s){cout<<x+1<<" "<<y+1<<" "<<x+1<<" "<<n+2+y-s.length()<<endl;key++;}
                        }
                        //tren duoi
                        if(m>=s.length()+x){
                            string s1;
                            for (int i=0;i<s.length();i++){
                                s1=s1+a[x+i][y];
                            }
                            if (s1==s){cout<<x+1<<" "<<y+1<<" "<<x+s.length()<<" "<<y+1<<endl;key++;}
                        }
                        //tren duoi xuyen
                        if(m<s.length()+x){
                            string s1;
                            for (int i=0;i<m-x;i++)
                            {
                                s1=s1+a[x+i][y];
                            }
                            for (int i=0;i<s.length()+x-m;i++){
                                s1=s1+a[i][y];
                            }
                            if (s1==s){cout<<x+1<<" "<<y+1<<" "<<x-m+s.length()<<" "<<y+1<<endl;key++;}
                        }
                        //duoi tren
                        if(x+1>=s.length()){
                            string s1;
                            for (int i=0;i<s.length();i++){
                                s1=s1+a[x-i][y];
                            }
                            if (s1==s){cout<<x+1<<" "<<y+1<<" "<<x+2-s.length()<<" "<<y+1<<endl;key++;}
                        }
                        //duoi tren xuyen
                        if(x+1<s.length()){
                            string s1;
                            for (int i=0;i<=x;i++){
                                s1=s1+a[x-i][y];
                            }
                            for (int i=0;i<s.length()-x-1;i++){
                                s1=s1+a[m-i-1][y];
                            }
                            if (s1==s){cout<<x+1<<" "<<y+1<<" "<<m+2+x-s.length()<<" "<<y+1<<endl;key++;}
                        }
                        //tren duoi cheo phai
                        if(m>=x+s.length()&&n>=y+s.length()){
                            string s1;
                            for (int i=0;i<s.length();i++){
                                s1=s1+a[x+i][y+i];
                            }
                            if (s1==s){cout<<x+1<<" "<<y+1<<" "<<x+s.length()<<" "<<y+s.length()<<endl;key++;}
                        }
                        //tren duoi cheo trai
                        if(y+1>=s.length()&&m>=s.length()+x){
                            string s1;
                            for (int i=0;i<s.length();i++){
                                s1=s1+a[x+i][y-i];
                            }
                            if (s1==s){cout<<x+1<<" "<<y+1<<" "<<x+s.length()<<" "<<y+2-s.length()<<endl;key++;}
                        }
                        //duoi tren cheo phai
                        if(x+1>=s.length()&&n>=s.length()+y){
                            string s1;
                            for (int i=0;i<s.length();i++){
                                s1=s1+a[x-i][y+i];
                            }
                            if (s1==s){cout<<x+1<<" "<<y+1<<" "<<x+2-s.length()<<" "<<y+s.length()<<endl;key++;}
                        }
                        //duoi tren cheo trai
                        if(x+1>=s.length()&&y+1>=s.length()){
                            string s1;
                            for (int i=0;i<s.length();i++){
                                s1=s1+a[x-i][y-i];
                            }
                            if (s1==s){cout<<x+1<<" "<<y+1<<" "<<x+2-s.length()<<" "<<y+2-s.length()<<endl;key++;}
                        }
                    }
                }
            }
            if(key==0){cout<<"not found"<<endl;}
        }
        else cout<<"input error"<<endl;
    }
}
