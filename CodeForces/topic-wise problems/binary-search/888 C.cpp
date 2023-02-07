/*
     ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
     उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||
*/

#include <bits/stdc++.h>
#include <climits>

using namespace std;

#define int            long long int
#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "\n"
#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
#define double         long double
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl

inline int power(int a, int b)
{
	int x = 1;
	while (b)
	{
		if (b & 1) x *= a;
		a *= a;
		b >>= 1;
	}
	return x;
}

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

const int N = 200005;

void solve();

int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt",  "r",  stdin);
	freopen("output.txt", "w", stdout);
#endif

	clock_t z = clock();

	int t = 1;
	// cin >> t;
	while (t--) solve();

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

	return 0;
}

//******************************************SOLUTION***********************************************

bool cmp(pair<char, int>& a, pair<char, int>& b)
{
    return a.second > b.second;
}

void solve() {
	// string str;
	// cin>>str;

	// int ans=0, temp=0;
	// map<char, int> mp;

	// for (int i=0; i<str.size(); i++) {
	// 	mp[str[i]]++;
	// }

	// vector<pair<char, int> > A;

 //    for (auto& it : mp) {
 //        A.push_back(it);
 //    }

 //    sort(A.begin(), A.end(), cmp);

	// if(mp.size()==1) {
	// 	cout<<1<<endl;
	// 	return;
	// } else if(mp.size()==str.size()) {
	// 	cout<<str.size()/2+1<<endl;
	// 	return;
	// } else {
	// 	int res=0, idx=0, ans=A.size();
	// 	for (int j=0; j<A.size(); j++) {
	// 		char x=A[j].first;
	// 		for (int i=0; i<str.size(); i++) {
	// 			if(str[i]==x) {
	// 				res = max(res, i-idx);
	// 				idx=i;
	// 			}
	// 		}
	// 		res = max(res, str.size()-1-idx);
	// 		ans = min(ans, res);
	// 	}

	// 	cout<<ans<<endl;
	// }

	string s;
	cin >> s;

	int ans = INT_MAX;
	
	for (int i = 0; i < 26; i++) {
		int prev = -1;
		char ch = 'a' + i;
		int j, res = -1;
		for (j = 0; j < s.size(); j++) {
			if (s[j] == ch) {
				res = max(res, j - prev);
				prev = j;
			}
		}
		res = max(res, j - prev);
		ans = min(ans, res);
	}
	cout << ans << endl;
}

//*************************************************************************************************
	