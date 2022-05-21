#include "../../_src/Log.h"
#include "../../_src/Utils.h"
#include <iostream>

using namespace std;

int main()
{
    int nho = 0, kq = 0;
    string tong = "Bai: Cong hai so nguyen lon";
    LOG_WT("%s\n", tong.c_str());
    string ten = "Ten: Le Thi Thanh Nhan";
    LOG_IT("%s\n", ten.c_str());
    string msv = "Msv: 21T1020543";
    LOG_IT("%s\n", msv.c_str());
    string cach = "-----";
    LOG_DT("%s\n", cach.c_str());
    string nhapa = "Nhap so a: ";
    LOG_DT("%s", nhapa.c_str());
    string s1;
    cin >> s1;
    string nhapb = "Nhap so b: ";
    LOG_DT("%s", nhapb.c_str());
    string s2;
    cin >> s2;
    string so = "Tong so: ";
    LOG_WT("%s", so.c_str());
    string ket_qua;
    while (s1.size() < s2.size())
        s1 = '0' + s1;
    while (s2.size() < s1.size())
        s2 = '0' + s2;

    for (int i = s1.size() - 1; i >= 0; i--)
    {
        kq = (s1[i] - 48) + (s2[i] - 48) + nho;
        nho = kq / 10;
        ket_qua += kq % 10 + 48;
    }
    if (nho != 0)
        ket_qua += nho + 48;

    for (int i = ket_qua.size() - 1; i >= 0; i--)
        cout << ket_qua[i];

    return 0;
}
