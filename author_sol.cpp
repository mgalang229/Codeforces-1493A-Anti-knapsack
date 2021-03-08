#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		// view the image in this repository for the derivation of the formula
		// this is the total number of elements:
		cout << n - k + k / 2 << '\n';
		// these are the elements after 'k'
		for (int i = k + 1; i <= n; i++) {
			cout << i << " ";
		}
		// these are the possible elements before 'k'
		for (int i = (k + 1) / 2; i < k; i++) {
			cout << i << " ";
		}
		cout << ((n - k + k / 2) == 0 ? "" : "\n");
	}
	return 0;
}
