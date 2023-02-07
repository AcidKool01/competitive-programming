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

void solve() {
	int n; cin >> n;
	vi arr(n, 0);
	for (int i=0; i<n; i++) cin >> arr[i];
	sort(all(arr));
	int count = 0, j = n/2;

	for (int i=0; i<n/2; i++) {
		while(arr[i]*2>arr[j] && j<n) j++;
		if(j<n) { count++; j++; }
	}
    
    /*		
	for(int i=n-1; i>=0; i--) {
		// int x = arr[i]/2;
		// int y = lower_bound(all(arr), x) - arr.begin();
		// // bug(arr[i],arr[y]);
		// if(arr[y]*2 <= arr[i]) {
		// 	count++;
		// 	arr.erase(arr.begin()+y);
		// } else {
		// 	y--;
		// 	if(arr[y]*2 <= arr[i]) {
		// 		count++;
		// 		arr.erase(arr.begin()+y);
		// 	}
		// }

		// int low=0, high=i-1, mid=-1;
		// while(low<high) {
		// 	mid = (high+low)/2;
		// 	if(arr[i]/2 >= arr[mid]) {
		// 		low = mid+1;
		// 	} else {
		// 		high = mid;
		// 	}
		// }

		// if(low<=mid || high==mid) {
		// 	count++;
		// 	arr.erase(arr.begin()+low);
		// }
	}
	*/

	cout << n - count << endl;
}

//*************************************************************************************************
	