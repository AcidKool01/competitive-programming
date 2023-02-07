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
	cin >> t;
	while (t--) solve();

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

	return 0;
}

//******************************************SOLUTION***********************************************

void solve() {
	int n, k; cin >> n >> k;
    vi arr(n, 0);
    for (int i=0; i<n; i++) { cin >> arr[i]; }
 
    int ans=n+1, tmp = 0;
    for (int i=0, j=0; i<n; i++) {
        while (j<n && tmp+arr[j] <= k) {
            tmp += arr[j];
            j++;
        }
        if (tmp == k) {
            ans = min(ans, n - (j - i));
        }
        tmp -= arr[i];
    }
 
    if (ans > n) {
        ans = -1;
    }
 
    cout << ans << '\n';

/*	
	int n, m; cin >> n >> m;
	deque<int> arr(n);
	deque<int> one;
	int sum = 0;
	for (int i=0; i<n; i++) {
		cin >> arr[i];
		if(arr[i]==1) one.push_back(i);
		sum +=arr[i];
	}

	if(sum < m) { cout << -1 << endl; return; }

	int count = 0, left=0, right=n-1;
	int diff = sum -m;
	while(diff!=0) {
		int x1 = one.front()-left, x2 = right - one.back();
		if(x1<=x2) {
			count+=one.front()+1-left;
			left = one.front()+1;
			one.pop_front();
		} else {
			count+=right-one.back()+1;
			right = one.back()-1;
			one.pop_back();
		}
		diff--;
	}


	cout << count << endl;

*/
}

//*************************************************************************************************
	