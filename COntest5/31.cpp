#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
struct MT
{
	long long a[15][15],n;
	MT()
	{
		for (int i=0;i<15;i++){
			for(int j=0;j<15;j++){
				a[i][j]=0;
			}
		}
	}
	
};

//MT donvi;
MT operator * (MT a, MT b)
{
	//cout<<"OK here: Nhan ma tran\n";
	MT x;
	x.n=a.n;
	for (int i = 0; i < a.n; i++)
	{
		for (int j = 0; j < b.n; j++)
		{
			x.a[i][j] = 0;
			for (int k = 0; k < b.n; k++)
			{
				x.a[i][j] = (x.a[i][j] + a.a[i][k]*b.a[k][j]) % mod;
			}
		}
	}
	return x;
}
MT powermod (MT a, long long n, MT donvi)
{
	if (n==0) return donvi;
    if (n==1)
        return a;
    MT res = powermod(a, n/2, donvi);
    res = res*res;
    if (n % 2==0) {
    	return res;
	}
    else return res*a;
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		long long n,k;
		cin >> n>>k;
		MT a;
		a.n = n;
		MT donvi;
		donvi.n = n;
		for (int i=0;i<n;i++){
			for(int j=0;j<n;j++)
				cin>>a.a[i][j];
			donvi.a[i][i]=1;
		}
		//cout<<"OK here\n";
		a = powermod(a, k,donvi);
		//cout<<"Nhan OK\n";
		for (int i = 0; i < n; i++) {
			for (int j = 0;j < n; j++) {
				cout<<a.a[i][j]<<' ';
			}
			cout<<endl;
		}
	}
	return 0;
}
 
