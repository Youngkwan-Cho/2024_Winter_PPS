#include <iostream>
using namespace std;
int main()
{
	long E, S, M;
	cin >> E >> S >> M;
  if (M-S<=0) cout << "-1\n";
  else cout << E/(M-S)+1 <<"\n";
}