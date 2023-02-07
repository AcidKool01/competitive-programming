#include<bits/stdc++.h>
using namespace std;

vector<int> elements(int Q, vector<vector<int>> query) {
	vector<int> ans;
	map<int, int> mp;
	vector<stack<int>> arr(1e5);
	int xx=0;
	for(int i=0; i<Q; i++) {
		int x = query[i][1];
		if(query[i][0]==1) {
			mp[x]++;
			arr[mp[x]].push(x);
			xx = max(xx, mp[x]);
		} else {
		 	while(arr[xx].empty()) xx--;
		 	ans.push_back(arr[xx].top());
		 	arr[xx].pop();
		}
	}

	return ans;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int q; cin >> q;
	vector<vector<int>> arr(q, vector<int>(2, 0));
	for(int i=0; i<q; i++) {
		cin >> arr[i][0] >> arr[i][1];
	}
	
	vector<int> ans;
	ans = elements(q, arr);

	for(auto x: ans) {
		cout << x << " ";
	}

	return 0;
}