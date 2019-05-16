#include <iostream>
#include <stdio.h>
#include <math.h>
#include <cmath>
using namespace std;

intmain () {
  int a, b, c;
  char choice;

  cout << "a";
  cin >> a;
  cout << "b";
  cin >> b;
  cout << "c";
  cin >> c;

  double ans1 = ((-b) + (sqrt ((pow (b, 2) - (4 * a * c))))) / (2 * a);
  double ans2 = ((-b) - (sqrt ((pow (b, 2) - (4 * a * c))))) / (2 * a);
  cout << ans1 << "\n" << ans2;
}
