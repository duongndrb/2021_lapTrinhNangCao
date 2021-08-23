//Hình dung bỗng nhiên bạn trong 1 thế giới ma trận 2 chiều.
//Bạn ở dưới đất (hàng 1). Các hòn đá rơi từ trên trời (hàng 2 trở lên) xuống theo chiều dọc (các cột).
//Tại mỗi vòng (lượt) bạn chỉ có thể đứng yên, hoặc nhảy sang trái 1 ô, hoặc nhảy sang phải 1 ô nếu như các ô đó trống.
//Và mỗi vòng (lượt), đá từ 1 hàng rơi xuống.
//Rồi tới lượt sau thì những hòn đá của hàng đang trên mặt đất sẽ biến mất (rơi tiếp chui vào lòng đất).
//
//Cho biết vị trí của bạn ở hàng 1, cũng như các hòn đá ở các hàng trên trong một ma trận 2 chiều.
//Hỏi có hay không cách nhảy/dịch chuyển, để cuối cùng bạn không bị hòn đá nào rơi vào người ?
//
//Ký hiệu: Y là bạn, R là hòn đá, E là ô trống.
//
//
//
//For example:
//
//Input	    Result
//5 5         YES
//REYEE
//EEREE
//EREEE
//EEERR
//REREE
//
//1 10        NO
//Y
//E
//E
//E
//E
//E
//R
//R
//R
//E
//-----------------------------------------------------------------------------------------------//
#include <iostream>

using namespace std;

int main()
{
    int soCot, soHang, viTriBanDau, viTriTiepTheo;
    cin >> soCot >> soHang;
    char maTranDa[soHang][soCot];
    for (int i = 0; i < soHang; i++)
    {
        string hang;
        cin >> hang;
        for (int j = 0; j < soCot; j++)
            maTranDa[i][j] = hang[j];
    }

    for (int j = 0; j <= soCot; j++)
        if (maTranDa[0][j] == 'Y') viTriBanDau = j;

    int viTriHienTai = viTriBanDau;

    for (int k = 0; k < soHang; k++)
    {
        if (maTranDa[1][viTriHienTai] == 'R')
        {
            if ((maTranDa[1][viTriHienTai - 1] == 'R' && maTranDa[1][viTriHienTai + 1] == 'R')
                || (maTranDa[1][viTriHienTai - 1] == 'R' && viTriHienTai == soCot - 1) || (maTranDa[1][viTriHienTai + 1] == 'R' && viTriHienTai == 0))
            {
                cout << "NO";
                return 0;
            }
            else if (maTranDa[1][viTriHienTai - 1] == 'E')
            {
                viTriTiepTheo = viTriBanDau - 1;
            }
            else
            {
                viTriTiepTheo = viTriBanDau + 1;
            }
        }
        else viTriTiepTheo = viTriHienTai;

        for (int i = 0; i < soHang - 1; i++)
        {
            for (int j = 0; j < soCot; j++)
            {
                maTranDa[i][j] = maTranDa[i + 1][j];
            }
        }

        for (int j = 0; j < soCot; j++)
            maTranDa[soHang - 1][j] = 'E';

        maTranDa[0][viTriTiepTheo] = 'Y';

        viTriHienTai = viTriTiepTheo;


    }
    cout << "YES";
    return 0;
}
