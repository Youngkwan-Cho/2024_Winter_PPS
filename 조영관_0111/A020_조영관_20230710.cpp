#include <iostream>
using namespace std;

int main() {
  int number[8];
  int a=0;
  int max=0;
  for (int i = 0; i < 8; i++) cin >> number[i];
  for (int i = 0; i < 8; i++) {
    if (i%2==0) a-=number[i];
    else a+=number[i];
    if (a>max) max=a;
  }
  cout << max <<  endl;
  return 0;
}