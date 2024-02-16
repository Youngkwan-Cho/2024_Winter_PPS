#include <iostream>
using namespace std;

int main() {
  int a[3];
  int number[10]={0};
  int total;

  for (int i=0; i<3; i++){
    cin >> a[i];
  }
  total=a[0]*a[1]*a[2];
  string b=to_string(total);
  for (int i=0; i<b.length(); i++){
    if (b.at(i)=='0') number[0]++;
    if (b.at(i)=='1') number[1]++;
    if (b.at(i)=='2') number[2]++;
    if (b.at(i)=='3') number[3]++;
    if (b.at(i)=='4') number[4]++;
    if (b.at(i)=='5') number[5]++;
    if (b.at(i)=='6') number[6]++;
    if (b.at(i)=='7') number[7]++;
    if (b.at(i)=='8') number[8]++;
    if (b.at(i)=='9') number[9]++;
  }
  for (int i=0; i<10; i++){
    cout << number[i] << endl;
  }
  return 0;
}