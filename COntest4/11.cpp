#include <iostream>
#include <queue>
 
using namespace std;
priority_queue <long long, vector <long long>, greater <long long> > Hp;
long long res = 0;
long long base =  1e9+7;
void query()
{
	long long  n;
	cin >> n;
	while (n--)
	{
		long long x;
		cin >> x;
		Hp.push(x);
	}
	while (Hp.size() > 1)
	{
		long long a = Hp.top(); Hp.pop();
		long long b = Hp.top(); Hp.pop();
		res += a + b;
		res %= base;
		Hp.push((a + b)%base);
	}
	cout << res % base << endl;
}
int main()
{
 
	query();
//	system("pause");
}
