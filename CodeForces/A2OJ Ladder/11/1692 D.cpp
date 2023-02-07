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
	string str; cin >> str;
	string str1, str2;
	str1.push_back(str[0]); str1.push_back(str[1]);
	str2.push_back(str[3]); str2.push_back(str[4]);

	int x; cin >> x;
	int x2 = x%60, x1 = x/60;

	int p = 999999;
	int count =0;
	set<string> s;
	while(p>0) {
		int y1 = stoi(str1), y2 = stoi(str2);
		y1 = y1 + x1;
		y2 = y2 + x2;


		if(y2>=60) { y2 = y2 - 60; y1++; }
		if(y1>=24) y1 = y1 - 24;
		// bug(y1, y2);

		str1 = to_string(y1);
		str2 = to_string(y2);

		if(y1==0) str1.push_back('0');
		else if(y1/10==0) str1 = "0" + str1;
		if(y2==0) str2.push_back('0');
		else if(y2/10==0) str2 = "0" + str2;

		string temp = str2;
		
		reverse(all(temp));

		if(temp==str1 && s.find(temp+str1) == s.end()) {
			count++;
			s.insert(temp+str1);
		}

		p = p-x;
	}

	cout << count << endl;
}

//*************************************************************************************************
	