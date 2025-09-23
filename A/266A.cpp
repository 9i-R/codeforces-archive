#include <bits/stdc++.h>
using namespace std;
 
int n, i, counter;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin>>n;
	// char stone[n+1];
	string stone;
	cin>>stone;
	for (i=0; i<n; i++) {
		if (stone[i]==stone[i+1]) {
			counter++;
		}
	}
	cout<<counter;
	
	return 0;
}
