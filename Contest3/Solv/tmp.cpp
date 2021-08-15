#include<bits/stdc++.h>
using namespace std;
int t=1 , n, s;
vector< vector<int> > res;
void FindPaartition(int index, vector<int> cur, vector<int> arr, int sum) {
	if (sum<=0) {
		if (sum == 0 && cur.size() == n) {
			res.push_back(cur);
		}
		return;
	}
	if (index < arr.size()) {
		cur.push_back(arr[index]);
		FindPaartition(index+1, cur, arr, sum-arr[index]);
		cur.pop_back();
		FindPaartition(index + 1, cur, arr, sum);
	}
	

}

int main(){
	vector<int> isPrime;
	vector<int> A(10000,1);
    A[1]=0;
    A[0]=0;
    for(int i=2;i*i<10000;i++){
        if(A[i]==1){
            for(int j=i*i;j<10000;j+=i)A[j]=0;
        }
    }
    for(int i=0;i<10000;i++)if(A[i])isPrime.push_back(i);
	int t;
	cin>>t;
	while(t--) {
		int p;
		res.clear();
		A.clear();
		int k;
		cin>>n>>p>>s;
		vector<int>OK;
		for(int i=0;i<isPrime.size();i++){
            if(isPrime[i]>s+100)break;
            if(isPrime[i]>=p)OK.push_back(isPrime[i]);
        }
        
		FindPaartition(0, A, OK, s);
		cout<<res.size()<<endl;
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++) {
				cout<<res[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}

