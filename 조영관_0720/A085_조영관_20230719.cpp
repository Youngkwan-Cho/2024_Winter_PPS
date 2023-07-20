#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
bool compare(string a, string b) {
	if (a.size() == b.size()){
		int asum = 0;
		for (int i = 0; i < a.size(); i++) {
			if ('0'<=a[i] && a[i]<= '9') {
				asum += (a[i] - '0');
			}	
		}
		int bsum = 0;
		for (int i = 0; i < b.size(); i++) {
			if ('0' <= b[i] && b[i] <= '9') {
				bsum += (b[i] - '0');
			}
		}
		if (asum == bsum) {
			return a < b;
		}
		else {
			return asum < bsum;
		}
	}
	else {
		return a.size() < b.size();
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int N=0;
	cin >> N;
	vector<string> v(N,"");
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
	return 0;
}