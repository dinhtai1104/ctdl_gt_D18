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
int firstDigit(int n) 
{ 
    // Remove last digit from number 
    // till only one digit is left 
    while (n >= 10) { 
        n /= 10; 
    } 
  
    // return the first digit 
    return n; 
} 
  
// Utility function that returns the count of numbers 
// written down when starting from n 
int getCount(int n) 
{ 
    int count = 1; 
  
    while (n != 0) { 
        int leadDigit = firstDigit(n); 
        n -= leadDigit; 
        count++; 
    } 
    return count; 
} 
  
// Function to find the largest number N which 
// can be reduced to 0 in K steps 
int getLargestNumber(int k) 
{ 
    int left = k; 
    int right = k * 10; 
    int mid = (left + right) / 2; 
  
    // Get the sequence length of the mid point 
    int len = getCount(mid); 
  
    // Until k sequence length is reached 
    while (len != k) { 
  
        // Update mid point 
        mid = (left + right) / 2; 
  
        // Get count of the new mid point 
        len = getCount(mid); 
  
        if (len > k) { 
  
            // Update right to mid 
            right = mid; 
        } 
        else { 
  
            // Update left to mid 
            left = mid; 
        } 
    } 
  
    // Increment mid point by one while count 
    // is equal to k to get the maximum value 
    // of mid point 
    while (len == k) { 
  
        if (len != getCount(mid + 1)) { 
            break; 
        } 
  
        mid++; 
    } 
  
    return (mid); 
} 
void FixedUpdate(){
	int n;
	cin>>n;
	cout << getLargestNumber(n)<<'\n';
}
int main(){
//	awake();
	int t=1;
	cin >> t;
	while(t--) {
		FixedUpdate();
	}

	return 0;
}





