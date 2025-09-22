#include <bits/stdc++.h>
using namespace std;
 
int N, x=0, i;
string s;
 
int main() {
  ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
  
	cin>>N;
	for (i=0; i<N; i++) {
		cin>>s;
		if(s.find("++")!=string::npos) {
			x++;
		} else if (s.find("--")!=string::npos) {
			x--;
		}
	}
	cout<<x;

  return 0;
}
