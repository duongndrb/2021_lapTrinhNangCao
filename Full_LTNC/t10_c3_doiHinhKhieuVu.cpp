//Có N cặp nam-nữ cùng nhau khiêu vũ (1≤N≤10000).
//
//Để có một đội hình khiêu vũ đẹp, chúng ta cần sắp xếp các cặp đôi này sao cho tất cả các bạn nam đều cao hơn bạn nữ khiêu vũ cặp với mình.
//
//Biết chiều cao của từng bạn trong đội khiêu vũ, viết chương trình kiểm tra xem đội khiêu vũ này có thể xếp lại thành một đội hình đẹp hay không.
//
//Đầu vào
//Đầu vào từ bàn phím gồm N+1 dòng:
//
//Dòng đầu tiên chứa số nguyên N là số lượng cặp khiêu vũ của đội.
//NN dòng tiếp theo: mỗi dòng chứa hai số thực, lần lượt là chiều cao của một bạn nam và một bạn nữ trong đội tính theo đơn vị mét.
//Đầu ra
//
//In ra màn hình dòng chữ Yes nếu tồn tại một cách sắp xếp đội hình đẹp cho các cặp khiêu vũ trên, ngược lại in ra No.
/////////////////////////

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int N; cin >> N;
    double arr[N][2];
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }
    int count;
    for(int i = 0; i< N; i++)
    {
        if(arr[i][0] > arr[i][1])
        {
            count += 1;
        }
        else
        {
            count = 0;
        }

    }
    if(count != N)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }
}
