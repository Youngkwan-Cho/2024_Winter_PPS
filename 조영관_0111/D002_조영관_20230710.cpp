#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int a;
  cin >> a;
  int number[a][3];
  int row = 0, col = 0;
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> number[i][j];
    }
  }
  for (int i = 0; i < a; i++) {
    row = 1, col = 1;
    for (int j = 1; j < number[i][2]; j++) {
      row+=1;
      if (row > number[i][0]) {
        row = 1;
        col++;
      }
    }
    if (col>=10) cout << row << col << endl;
    else cout << row*10 << col << endl;
  }
  return 0;
}