#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define ppii pair<int, pii>
using namespace std;
vector <int> V[1005];
int mrk[1005];
int main(){
	int n;
	cin>>n;
	for(int i=2; i<=n; i++){
		int tmp=i;
		for(int j=2; j<=n; j++){
			int pro=1;
			while(tmp%j==0){
				pro*=j;
				tmp/=j;
			}
			if(pro!=1)
			V[i].pb(pro);
		}
	}
	vector <int> A;
	for(int i=2; i<=n; i++){
		for(int j=0; j<V[i].size(); j++){
			if(!mrk[V[i][j]]){
				A.pb(V[i][j]);
				mrk[V[i][j]]=1;
			}
		}
	}
	cout<<A.size()<<endl;
	for(int i=0; i<A.size(); i++)cout<<A[i]<<" ";
}
