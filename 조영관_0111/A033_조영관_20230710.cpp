#include <iostream>
using namespace std;

int main() {
    int a[5][4];
    int total[5];
    int max=0;
    int set=0;
    for (int i=0; i<5; i++){
      total[i]=0;
      for (int j=0; j<4; j++){
        cin >> a[i][j];
        total[i]+=a[i][j];
      }
    }
    for (int i=0; i<5; i++){
      if (total[i]>max) {
        max=total[i];
        set=i;
      }
      }
    cout << set+1 << " " << total[set];
    return 0;
}