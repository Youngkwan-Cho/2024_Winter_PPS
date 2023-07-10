#include <iostream>
using namespace std;

int main() {
  int number[8];
  int ascend=0;
  int decend=0;
  int mix=0;
  
  for (int i = 0; i < 8; i++) cin >> number[i];
  for (int i = 0; i < 7; i++) {
    if (number[i]==number[i+1]+1) decend++;
    else if (number[i]==number[i+1]-1) ascend++;
    else mix++;
  }
  if (decend>=7)   cout << "descending" <<  endl;
  else if (ascend>=7)   cout << "ascending" <<  endl;
  else   cout << "mixed" <<  endl;
  return 0;
}