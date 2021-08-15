#include<bits/stdc++.h>
using namespace std;
vector<int> isPrime;
vector<int> Ok;
vector<vector<int> > ans;
int n,s,p;
void solve(int sum,vector<int> P,int index){

    if(sum==0&&P.size()==n)
    {
        ans.push_back(P);
        return ;
    }
    if(index>=Ok.size()||P.size()>n)return;
    if(sum-Ok[index]>=0){
            P.push_back(Ok[index]);
            solve(sum-Ok[index],P,index+1);
            P.pop_back();
    }
    solve(sum,P,index+1);
    

}
int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    int t;
    scanf("%d",&t);
    vector<int> A(10000,1);
    A[1]=0;
    A[0]=0;
    for(int i=2;i*i<10000;i++){
        if(A[i]==1){
            for(int j=i*i;j<10000;j+=i)A[j]=0;
        }
    }
    for(int i=0;i<10000;i++)if(A[i])isPrime.push_back(i);
   
    while (t--)
    {
        scanf("%d%d%d",&n,&p,&s);
        ans.clear();
        Ok.clear();
        for(int i=0;i<isPrime.size();i++){
            if(isPrime[i]>s+100)break;
            if(isPrime[i]>=p)Ok.push_back(isPrime[i]);
        }
        A.clear();
        solve(s,A,0);
        // sort(ans.begin(),ans.end());
        printf("%d\n",int(ans.size()));
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++)printf("%d ",ans[i][j]);
            printf("\n");
        }
        

    }
    
}
