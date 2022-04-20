#include <iostream>
#include <string>

#include "..\..\_src\Log.h"
#include "..\..\_src/Utils.h"

typedef std::string bignum;

void equal_length(bignum &a, bignum &b)
{
  while (a.size() < b.size())
    a = '0' + a;
  while (b.size() < a.size())
    b = '0' + b;
}

bignum sum(bignum a, bignum b)
{
  equal_length(a, b);

  int remain = 0;
  bignum result;
  for (int i = a.size() - 1; i >= 0; --i)
  {
    int d = (a[i] - '0') + (b[i] - '0') + remain;

    remain = d / 10;
    result = (char)(d % 10 + '0') + result;
  }

  if (remain)
    result = '1' + result;

  return result;
}

int main()
{
  std::string a, b;
  // std::cin >> a;
  // std::cin >> b;
  // std::cout << sum(a, b);

  // in theo yeu cau de bai: 
  LOG_WT("Bai: tong so trong xau\n");
  LOG_IT("Ten: Nguyen Van Nam\n");
  LOG_IT("Msv: 21T1020049\n");
  LOG_DT("--------\n");
  LOG_DT("Nhap so a: ");
  std::cin >> a;
  LOG_DT("Nhap so b: ");
  std::cin >> b;
  LOG_WT("Tong so: %s", sum(a, b).c_str());

  return 0;
}