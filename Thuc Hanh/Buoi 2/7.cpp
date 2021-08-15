#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define get(n) ll n; cin>>n
#define getStr(s) string s;cin>>s;
#define getStrs(s) string s;getline(cin,s);
#define set_arr(a,n); ll a[n]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<ll>a(n); for(int i=0;i<n;i++)cin>>a[i];
#define sort_arr(a,n) stable_sort(a,a+n)
#define sort_vect(a) stable_sort(a.begin(),a.end())
#define btSpeed() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(),x.end()
using namespace std;
typedef long long ll;
 
ll mod = 1e15 + 7;
struct MT
{
	ll a[4][4]; 
	MT()
	{
		a[0][0] = a[0][1] = a[1][1] = a[1][2] = a[1][3] = a[2][1] = a[3][2] = 1;
		a[0][2]= a[0][3] = a[1][0] = a[2][0] = a[2][2] = a[2][3] = a[3][0] = a[3][1] = a[3][3] = 0;
	}
};
 
long long solve(long long a,long long b)
{
    if (b == 0) 
        return 0;
    long long t = solve(a, b / 2);     	
    t = (t + t) % mod; 
    if (b % 2 == 1) 
        t = (t + a) % mod;
    return t;
} 
MT operator * (MT a, MT b)
{
	MT x;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			x.a[i][j] = 0;
			for (int k = 0; k < 4; k++)
			{
				x.a[i][j] = (x.a[i][j] % mod + solve((b.a[k][j]%mod), (a.a[i][k]%mod))) % mod;
				x.a[i][j] %= mod;
			}
		}
	}
	return x;
}
MT nhan(MT a, MT b)
{
	MT x;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			x.a[i][j] = 0;
			for (int k = 0; k < 4; k++)
			{
				x.a[i][j] = (x.a[i][j] % mod + solve((b.a[k][j]%mod), (a.a[i][k]%mod))) % mod;
				x.a[i][j] %= mod;
			}
		}
	}
	return x;
}
MT powermod (MT a, ll n)
{
    if (n==1)
        return a;
    if (n%2!=0)
        return powermod(a,n-1)*a;
    MT tmp = powermod(a,n/2);
    return tmp*tmp;
}
int main()
{
	ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int q;
	cin >> q;
	MT x; x.a[0][0] = 3; x.a[1][0] = 3; x.a[2][0] = 2; x.a[3][0] = 1;
	
	while(q--)
	{
		ll n;
		cin >> n;
		if (n == 1) cout << 1 << endl;
		else if (n == 2) cout << 3 << endl;
		else
		{	
			MT a;
			a = nhan(powermod(a, n - 2), x);
			cout << a.a[0][0] << endl;
		}
	}
	return 0;
}
 
