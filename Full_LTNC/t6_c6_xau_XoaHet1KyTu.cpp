//Cho xâu a và ký tự c. Viết chương trình xóa hết các ký tự c trong a.
//
//For example:
//
//Input	        Result
//hello world     hell wrld
//o
//
//hi              hi
//a
//----------------------------------------------------------------------//

#include <iostream>
#include <string>

using namespace std;
int main(){
    string my_string;
    getline(cin, my_string);
    char kytu ;
    cin >>  kytu;
    int n = my_string.length();
    for(int i = 0; i < n; i++)
    {
        if(my_string[i] == kytu)
        {
            for(int j = i; j < n; j++)
            {
                my_string[j] = my_string[j+1];
                my_string[n] = ' ';
                i--;
            }

        }
    }
    cout << my_string;
}

