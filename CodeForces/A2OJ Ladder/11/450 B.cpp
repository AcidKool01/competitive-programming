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

	int x, y, n;
	cin >> x >> y >> n;

	n = n-3 ;
	n = n % 6 ;
	
	long long temp = 0;
	
	if ( n == 0 ) {
		temp =  y-x ;
	} else if ( n==1 ) {
		temp =  -x ;
	} else if ( n==2 ) {
		temp =  -y ;
	} else if ( n==3 ) {
		temp =  x-y ;
	} else if ( n==4 ) {
		temp =  x ;
	} else if ( n==5 ) {
		temp =  y ;
	}
	
	if ( n==-1 )
		temp = y ;
	
	if ( n==-2 )
		temp = x ;
	
    if ( temp < 0 ) {
        temp = temp % 1000000007 ;
        cout << (1000000007 + temp) % 1000000007  ;
    } else {
        cout << temp % 1000000007 ;
    }

	// int x, y, n;
	// cin >> x >> y >> n;
	// if(x==0 && y==0) { cout << 0 << endl; return }

	// int mod = 1000000007;
	// int ans=0;

	// for (int i=2; i<=n-1; i++) {
	// 	x = y;
	// 	y = (y%mod - x%mod);
	// }

	// if(y<0) { cout << mod + y << endl; return; }
	// else { cout << y%mod << endl; }

	// int x, y, n;
	// cin >> x >> y >> n;

	// if(x==0 && y==0) { cout << 0 << endl; return; }
	
	// int mod = 1000000007;
	// int ans=0;
 
	// vi arr(n+1, 0);
	// arr[1] = x; arr[2] = y;
 
	// for (int i=2; i<=n-1; i++) {
	// 	arr[i+1] = (arr[i]%mod - arr[i-1]%mod)%mod;
	// }
 
	// if(arr[n]<0) { cout << mod + arr[n] << endl; return; }
	// else { cout << arr[n]%mod << endl; }
}

//*************************************************************************************************
	