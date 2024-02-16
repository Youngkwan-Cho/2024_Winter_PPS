#include <iostream>
#include <algorithm>
using namespace std;

int a, number[501][501];
int dp[501][501];
int ans;
int dy[] = { 0,0,-1,1 }, dx[] = { -1,1,0,0 };

int dfs(int y, int x) {
	if (dp[y][x]) return dp[y][x];
	dp[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (number[ny][nx] > number[y][x]) {
			dp[y][x] = max(dp[y][x], dfs(ny, nx) + 1);
		}
	}
	return dp[y][x];
}

int main() {
  cin >> a;
  for (int i = 0; i < a; i++) {
    for (int j=0; j<a; j++) {
      cin >>number[i][j];
    }
  }
  for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			ans = max(ans,dfs(i, j));
		}
	}
	printf("%d", ans);
  return 0;
}