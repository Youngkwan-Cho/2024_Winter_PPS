#include <iostream>
using namespace std;

int main() {
  int number;
  cin >> number;

  int a[number];
  int min = 0;
  int young = 0;

  for (int i = 0; i < number; i++) {
    cin >> a[i];
    min += (a[i] / 60 +1) * 15;
    young += (a[i] / 30 +1) * 10;
  }
  if (min < young)
    cout << "M " << min << endl;
  else if (young < min)
    cout << "Y " << young << endl;
  else
    cout << "Y M " << min << endl;

  return 0;
}