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
	
	int n, m;
	cin >> n >> m;

	vpi arr(n);
	int day[100001] = {0};
	for (int i=0; i<n; i++) {
		cin >> arr[i].first >> arr[i].second;
		day[arr[i].first] += arr[i].second;
	}
	sort(all(arr));

	// int j = 1;
	// day[1] = arr[0].second;
	// for (int i=0; i<n-1; i++) {
	// 	if(arr[i].first==arr[i+1].first) {
	// 		day[j] = day[j]+arr[i+1].second;
	// 	} else {
	// 		j++;
	// 		day[j] = arr[i+1].second;
	// 	}
	// }

// for (int i=0; i<=n+2; i++) cout << day[i] << endl;

	int ans = 0;
	for (int i=1; i<=10000; i++) {
		// if(day[i]<=m){
			if(day[i-1]>0) {
				if(day[i-1]<=m) {
					int rem = m - day[i-1];
					ans = ans + day[i-1];
					if(day[i]<=rem) {
						ans = ans + day[i];
						day[i] = 0;
					} else {
						ans = ans + rem;
						day[i] = day[i] - rem;
					}
				} else {
					ans = ans + m;
					day[i-1] = 0;
				}
			} else{
				if(day[i]<=m) {
					ans = ans + day[i];
					day[i] = 0;
				} else {
					ans = ans + m;
					day[i] = day[i] - m; 
				}
			}
	}

	// for (int i=0; i<=n+2; i++) cout << day[i] << endl;

	cout << ans << endl;

/*
	vpi a(n);
	map<int, int> arr;
	for(int i=0; i<n; i++) { 
		cin >> a[i].first >> a[i].second;
		arr[a[i].first] = arr[a[i].first] + a[i].second;
	}

	print1(arr);
	
	int ans = 0, accumalate = 0, prevDay = 0;
	for(int i=0; i<n; i++) {
		if(arr[a[i].first]<=m) {
			ans = ans + arr[a[i].first];
			if(accumalate <= m - arr[a[i].first]) {
				ans = ans + accumalate;
				accumalate = 0;
			} else {
				ans = ans + m - arr[a[i].first];
				accumalate = accumalate - (m - arr[a[i].first]);
			}
		} else {
			ans = ans + m;
			accumalate = accumalate + (arr[a[i].first] - m);
		}
	}
 
	if(accumalate > m) accumalate = m;
 
	cout << ans + accumalate << endl;
*/



/*
	int brr[n] = {0};
	for(int i=0; i<n; i++) {
		if(prevDay+1==arr[i].first) {
			if(arr[i].second<=m) {
				ans = ans + arr[i].second;
				if(accumalate <= m - arr[i].second) {
					ans = ans + accumalate;
					accumalate = 0;
					brr[i] = m - arr[i].second - accumalate;
				} else {
					ans = ans + m - arr[i].second;
					accumalate = accumalate - (m - arr[i].second);
				}
			} else {
				ans = ans + m;
				accumalate = accumalate + (arr[i].second - m);
			}

		} else if(prevDay==arr[i].first) {
			if(brr[i]>0) {
				if(brr[i]<=m) {
					ans = ans + brr[i];
					brr[i] = 0;
				} else {
					ans = ans + brr[i] - m;
					brr[i] = brr[i] - (brr[i] - m);
				}
			}
		} 
		int k = i;
		while(arr[i].first-prevDay >1){
			if(accumalate<=m) {
				ans += accumalate;
				accumalate = 0;
			} else {
				ans += m - accumalate;
				accumalate = accumalate - (m-accumalate);
			}

		}

		prevDay = arr[i].first;
	}

	if(accumalate > m) accumalate = m;

	cout << ans + accumalate << endl;
*/	
	
}

//*************************************************************************************************
	