#include <iostream>
#include <stdio.h>
#include <math.h>
#include <cmath>
using namespace std;

int main () {
  int a, b, c;
  char choice;

  cout << "a";
  cin >> a;
  cout << "b";
  cin >> b;
  cout << "c";
  cin >> c;

//Quadratic equation values of x 
  double ans1 = ((-b) + (sqrt (discriminate))) / (2 * a);
  double ans2 = ((-b) - (sqrt (discriminate))) / (2 * a);
//Discriminate (b^2 - 4ac)
  double discriminate = pow(b, 2) - 4 * a * c;

  cout << "Values of x:\n" << ans1 << "\n" << ans2 << "\nDiscriminate:";
  cout << discriminate;
}
