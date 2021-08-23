//Nhập vào 1 câu. In ra các từ của câu đó được bao bởi khung chữ nhật với các ký tự "*"
//
//For example:
//
//Input	            Result
//hello world         *********
//                    * hello *
//                    * world *
//                    *********
//
//this is a sentence  ************
//                    * this     *
//                    * is       *
//                    * a        *
//                    * sentence *
//                    ************
//----------------------------------------------------------------------------------//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string input;
    getline(cin,input);
    vector <string> s;
    while (!input.empty())
    {
        s.push_back(input.substr(0,input.find(" ")));
        if (input.find(" ") > input.size()) //Check if found " " (Space)
            break;
        else
            input.erase(0, input.find(" ") + 1);
    }
    if(s.size()>1)
    {
        int max;
        max= s[0].length();
        for (int i =1; i < s.size(); i++)
        {
            if(max < s[i].length())
                max = s[i].length();
        }
        for (int i = 0; i < max+4; i++)
        {
            cout << "*";
        }
        cout<<endl;
        for (int i = 0; i < s.size(); i++)
        {
            cout << "* "<<s[i];
            for(int j=0; j<max-s[i].length(); j++)
            {
                cout<<" ";
            }
            cout<<" *"<<endl;
        }
        for (int i = 0; i < max+4; i++)
        {
            cout << "*";
        }
    }

    else
    {
        int k;
        k= s[0].length();
        for (int i = 0; i < k+4; i++)
        {
            cout << "*";
        }
        cout<<endl;
        cout<<"* "<< s[0]<<" *";
        cout<<endl;
        for (int i = 0; i < k+4; i++)
        {
            cout << "*";
        }
    }
}
