#include <bits/stdc++.h>
using namespace std;
 
int counter=0, a, b;
 
int main() {
  ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
  
	cin>>a>>b;
	if (a>b) {
		cout<<0;
	} else {
		while (a<=b) {
			a*=3;
			b*=2;
			counter++;
		}
		cout<<counter;
	}

  return 0;
}
