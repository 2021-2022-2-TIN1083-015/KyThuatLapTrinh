#include <iostream>
#include <string>

#include "..\..\_src\Log.h"
#include "..\..\_src/Utils.h"

using namespace std;

string tong(string a, string b){

  while (a.size() < b.size())
    a = '0' + a;
  while (b.size() < a.size())
    b = '0' + b;

  int du = 0;
  string ketQua;
  for (int i = a.size() - 1; i >= 0; --i) {
    int d = (a[i] - '0') + (b[i] - '0') + du;

    du = d / 10;
    ketQua = (char)(d % 10 + '0') + ketQua;
  }
  if (du) ketQua = '1' + ketQua;

  return ketQua;
}

int main() {
  string a;
  string b;
  LOG_WT("Bai: tong so trong xau\n");
  LOG_IT("Ten: Ho Anh Duy\n");
  LOG_IT("Msv: 21T1020024\n");
  LOG_DT("--------\n");
  LOG_DT("Nhap so a: ");
  std::cin >> a;
  LOG_DT("Nhap so b: ");
  std::cin >> b;
  LOG_WT("Tong so: %s", tong(a, b).c_str());

  return 0;
}