#include<bits/stdc++.h>
#define M 1000000007
#define fi first
#define se second
#define ll long long
#define pb push_back
#define ppair pair<int, int>
using namespace std;

int n, m;

bool isSafe(int v, bool graph[][15],  
            int path[], int pos)  
{  
    if (graph [path[pos - 1]][ v ] == 0)  
        return false;  
    for (int i = 0; i < pos; i++)  
        if (path[i] == v)  
            return false;  
  
    return true;  
}  

bool hamCycleUtil(bool graph[][15],  
                  int path[], int pos)  
{  
    if (pos == n - 1)  
    {   
        return true;  
    }    
    for (int v = 1; v < n; v++)  
    {  
        if (isSafe(v, graph, path, pos))  
        {  
            path[pos] = v;  
            if (hamCycleUtil (graph, path, pos + 1) == true)  
                return true;  
            path[pos] = -1;  
        }  
    } 
    return false;  
}  
  
bool hamCycle(bool graph[][15])  
{  
    int *path = new int[n];  
    for (int i = 0; i < n; i++)  
        path[i] = -1;  
    path[0] = 0;  
    if (hamCycleUtil(graph, path, 1) == false )  
    {   
        return false;  
    }   
    return true;  
}

main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		bool a[15][15];
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			a[x-1][y-1] = 1;
			a[y-1][x-1] = 1;
		}
		if(hamCycle(a))	cout << "1\n";
		else
			cout << "0\n";
	}
}

