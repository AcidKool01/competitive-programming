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
	int n, d;
	cin >> n >> d;

	set<pair<string, string>> friends;
    vector<pair<pair<string, string>, int>> sent;
    for (int i = 0; i < n; i++) {
        string a, b;
        int t;
        cin >> a >> b >> t;
        
        for (int j = 0; j < i; j++) {
            if (b == sent[j].first.first && a == sent[j].first.second) {
                if (t - sent[j].second <= d && t != sent[j].second) {
                    friends.emplace(min(a, b), max(a, b));
                    break;
                }
            }
        }
        
        sent.emplace_back(make_pair(a, b), t);
    }
    
    cout << friends.size() << endl;
    for (auto &i : friends) {
        cout << i.first << ' ' << i.second << endl;
    }

	// map<pair<string, string>, int> mp;
	// set<pair<string, string>> ans;

	// for (int i=0; i<n; i++) {
	// 	string a, b; cin >> a >> b;
	// 	int t; cin >> t;
	// 	// cout<<a<<" "<<" "<<b<<" "<<mp[{a, b}]<<endl;
	// 	if(a.compare(b) < 0) {
	// 		if(mp.find({a, b}) != mp.end()) {
	// 			int ff = mp[{a, b}];
	// 			mp[{a, b}] = abs(mp[{a, b}]-t);
	// 			if(mp[{a, b}]<=d && mp[{a, b}]!=0) {
	// 				// cout<<a<<" "<<b<<endl;
	// 				ans.insert({a, b});
	// 			} else if(mp[{a, b}]>d) {
	// 				mp[{a, b}] = max(t, ff);
	// 			}
	// 		} else {
	// 			mp[{a, b}] = t;
	// 		}
	// 	} else {
	// 		if(mp.find({b, a}) != mp.end()) {
	// 			int ff = mp[{b, a}];
	// 			mp[{b, a}] = abs(mp[{b, a}]-t);
	// 			if(mp[{b, a}]<=d && mp[{b, a}]!=0) {
	// 				ans.insert({b, a});
	// 			} else if(mp[{b, a}]>d){
	// 				mp[{b, a}] = max(t, ff);
	// 			}
	// 		} else {
	// 			mp[{b, a}] = t;
	// 		}		
	// 	}
	// }

	// cout<<ans.size()<<endl;

	// for (auto x: ans) {
	// 	cout<<x.first<<" "<<x.second<<endl;
	// }
}

//*************************************************************************************************
	