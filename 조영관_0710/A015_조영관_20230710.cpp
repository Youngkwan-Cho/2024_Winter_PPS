#include <iostream>
using namespace std;

int main() {
  int number[5];
  int a;
  int total=0;

  for (int i = 0; i < 5; i++) {
    cin >> number[i];
    a=number[i]*number[i];
    total+=a;
  }

  cout << total%10 <<  endl;
  return 0;
}