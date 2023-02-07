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
	cin >> t;
	while (t--) solve();

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

	return 0;
}

//******************************************SOLUTION***********************************************

// int dp[1001][1001];

// int lcs (int n, int m, string str, string rev) {
// 	if(n<=0 || m<=0) return 0;
// 	else if(dp[n][m] != -1) return dp[n][m];
// 	else if (str[n-1]==rev[m-1]) {
// 		return dp[n][m] = 1+lcs(n-1, m-1, str, rev);
// 	} else {
// 		return dp[n][m] = max(lcs(n-1, m, str, rev), lcs(n, m-1, str, rev));
// 	}
// }

void solve() {
	string str;
	int n;
    int ans = INT_MAX;
    cin >> n >> str;
    for (char cur = 'a'; cur <= 'z'; ++cur) {
        bool impossible = false;
        int left = 0, right = n - 1, cnt = 0;
 
        while (left < right) {
            if (str[left] == str[right]) {
               	left++;
               	right--;
            } else {
                if (str[left] == cur) {
                    left++;
                    cnt++;
                } else if (str[right] == cur) {
                    right--;
                    cnt++;
                } else {
                    impossible = true;
                    break;
                }
            }
        }
 
        if (!impossible)
            ans = min(ans, cnt);
    }

    if (ans == INT_MAX) ans = -1;
    cout << ans << "\n";
}
 

//*************************************************************************************************
	