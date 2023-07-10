#include <iostream>
using namespace std;

int main() {
  int number;
  cin >> number;
  int a;
  int total=0;

  for (int i = 0; i < number; i++) {
    cin >> a;
    total+=a;
  }

  cout << total-number+1 <<  endl;
  return 0;
}