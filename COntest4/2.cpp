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
long *a;
 
void nhap()
{
	a=new long[2];
	for(int i=0; i<2; i++)
	{
		cin>>a[i];
	}
}
void min()
{
 
	for(int i=0; i<2; i++)
	{
		int temp=a[i];
		int dem=0;
		while(temp>0)
		{
			if(temp%10==6)
				a[i]=a[i]-pow(10,dem);
			dem++;
			temp/=10;
		}	
	}
	cout<<a[0]+a[1]<<" ";
}
void max()
{
		for(int i=0; i<2; i++)
	{
		int temp=a[i];
		int dem=0;
		while(temp>0)
		{
			if(temp%10==5)
				a[i]=a[i]+pow(10,dem);
			dem++;
			temp/=10;
		}	
	}
	cout<<a[0]+a[1];
}
void xuly()
{
	
}
int main()
{
	nhap();
	min();
	max();
	delete[]a;
} 



