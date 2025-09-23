#include <bits/stdc++.h>
using namespace std;
 
int w;
 
int main() {
  
  ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
  
	cin>>w;
	if (w%2==0&&w!=2) {
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
  
  return 0;
}
