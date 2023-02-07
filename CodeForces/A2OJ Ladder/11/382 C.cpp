/*
     ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
     उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||
*/

#include <bits/stdc++.h>

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

void solve() {
	int n; cin >> n;
	vi arr(n, 0);
	for (int i=0; i<n; i++) cin >> arr[i];
	if(n==1) { cout << -1 << endl; return; }
	
	sort(all(arr));
	int ans=0, flag=0;
	for (int i=1; i<n-1; i++) {
		if(arr[i+1]-arr[i] != arr[i]-arr[i-1]) {
			flag = 1;
		} 
	}

	// in AP
	if(flag==0) {
		int d = arr[1] - arr[0];
		if(d==0) {
			cout << 1 << endl;
			cout << arr[0] << endl;
			return;
		}
		if(n==2 && d>1 && d%2==0) {
			cout << 3 << endl;
			cout << arr[0] - d << " " << arr[0] + d/2 << " " << arr[n-1] + d << endl;
		} else {
			cout << 2 << endl;
			cout << arr[0] - d << " " << arr[n-1] + d << endl;
		}
	} else { // not in AP
		map<int, int> mp;
		for(int i=0; i<n-1; i++) {
			mp[arr[i+1]-arr[i]]++;
		}

		if(mp.size()>2) { 
			cout << 0 << endl; 
			return;
		} else {
			int f = 0;
			auto it = mp.begin();
			int d = (int)it->first;
			for(int i=0; i<n-1; i++) {
				if(arr[i]+d==arr[i+1]) {
					continue;
				} else {
					if(f==1) {
						cout << 0 << endl;
						return;
					}
					ans = arr[i]+d;
					arr[i] = arr[i]+d;
					i--;
					f=1;
				}
			}
			cout << 1 << endl;
			cout << ans << endl;
		}	
	}
}

//*************************************************************************************************
	