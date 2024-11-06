#include "myfunctions.h"
#include <iomanip>
#include <iostream>
using namespace std;

int retSum(int a, int b);
double calcDiv(int a, int b);

int main() {
  double result;
  int a, b;

  cout << "Anna kokonaisluku: a" << endl;
  cin >> a;
  cout << "Anna kokonaisluku: b" << endl;
  cin >> b;

      result = retSum(a, b);
  cout << "Kokonaisluku a: " << a << " ja kokonaisluku b: " << b
       << " summa on=" << result << "\n"
       << endl;

  result = calcDiv(a, b);
  cout << fixed;
  cout << setprecision(2);
  cout << "Kokonaisluku a: " << a << " ja kokonaisluku b: " << b
       << " osamäärä on=" << result << "\n"
       << endl;

  return 0;
}
