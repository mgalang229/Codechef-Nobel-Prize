#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, m;
		cin >> n >> m;
		set<int> s;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			// store the elements in a set
			s.insert(x);
		}
		bool checker = false;
		for (int i = 1; i <= m; i++) {
			// check if every number up to 'm' is in the set
			if (s.find(i) == s.end()) {
				// if it's not, then set the 'checker' to true and end the loop
				checker = true;
				break;
			}
		}
		cout << (checker ? "Yes" : "No") << '\n';
	}
	return 0;
}
