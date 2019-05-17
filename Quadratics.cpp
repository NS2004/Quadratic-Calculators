#include <iostream>
#include <stdio.h>
#include <math.h>
#include <cmath>
using namespace std;

int main () {
  double a, b, c;
  char choice;

    while (choice !='n') {
      cout << "a";
      cin >> a;
      cout << "b";
      cin >> b;
      cout << "c";
      cin >> c;
    
    //Axis of symmetry
     double aos = (-b)/(2 * a);
     cout << "Axis of symmetry: \nx = " << aos;
    //Discriminate (b^2 - 4ac)
      double discriminate = pow(b, 2) - 4 * a * c;
      cout << "\nDiscriminate:\n" << discriminate;
     
    //Quadratic equation values of x 
      double ans1 = ((-b) + (sqrt (discriminate))) / (2 * a);
      double ans2 = ((-b) - (sqrt (discriminate))) / (2 * a);
      if (ans1 != ans2) {
        cout << "\nValues of x:\n" << ans1 << "\n" << ans2;
      }
      if (ans1 == ans2) {
        cout << "\nValue of x:\n" << ans1;
      }
      cout << "\ny/n:";
      cin >> choice;
      if (choice == 'n') {
          break;
      }
    }
}
