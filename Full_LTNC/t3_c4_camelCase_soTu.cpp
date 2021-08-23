//Cho một chuỗi dạng camel case (như con lạc đà có bướu lên cao xuống thấp).
//In ra số từ trong chuỗi đó.
//
//For example:
//
//Input	                Result
//camelCase               2
//saveChangesInTheEditor  5
//--------------------------------------------------------------------------//

#include <iostream>
#include <string>
using namespace std;

int camelCase(string s)
{
    int ketqua = 1;
    for(int i = 0; i <s.length(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            ketqua += 1;
        }
        else
        {
            ketqua = ketqua;
        }
    }
    return ketqua;
}

int main()
{
    string my_string;
    getline(cin, my_string);
    cout << camelCase(my_string);
}
