#include <bits/stdc++.h>
using namespace std;
 
int n, i, hitung, a, b, c;
 
int main() {
    
  ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
	cin>>n;
	for (i=0; i<n; i++) {
		cin>>a>>b>>c;
		if (a==1&&b==1) {
			hitung++;
		}
		else if (a==1&&c==1) {
			hitung++;
		}
		else if (b==1&&c==1) {
			hitung++;
		}
	}
	cout<<hitung;
	
	return 0;
}
