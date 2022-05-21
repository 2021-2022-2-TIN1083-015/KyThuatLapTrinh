#include <bits/stdc++.h>

#include "..\..\_src\Log.h"
#include "..\..\_src/Utils.h"

int main() {
    LOG_WT("Bai: Ma hoa van ban\n");
    LOG_IT("Ten: Nguyen Van Nam\n");
    LOG_IT("Msv: 21T1020049\n");
    std::string chuoi;
    std::cin >> chuoi;
    LOG_DT("Xau Q: %s\n", chuoi);
    int k;
    std::cin >> k;
    LOG_DT("Khoa k: %d\n", k);
    std::string ket_qua = "";
    for (int a = k - 1; a >= 0; a--)
        ket_qua += chuoi[a];
    for (int b = chuoi.size() - 1; b >= k; b--)
        ket_qua += chuoi[b];
    std::cout << ket_qua;
    LOG_DT("Xau s: %s\n", ket_qua);
}