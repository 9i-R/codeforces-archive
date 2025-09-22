#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t; cin>>t;
	while (t--) {
		int n; cin>>n;
		
		long long g[n+1] = {};
		for (int i=0; i<n; i++) {
		    cin>>g[i];
		}
		
		sort(g, g+n, greater());
		
		long long total=0;
		for (int i=0; i<n; i+=2) {
		    total+=g[i];
		}
		cout<<total<<"\n";
	}	
}
