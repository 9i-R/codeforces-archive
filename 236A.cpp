#include <bits/stdc++.h>
using namespace std;
 
string s;
int i, j, counter=0, issame=0, length;
 
int main() {
  ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
  
	cin>>s;
	length=s.length();
	for (i=0; i<length; i++) {
		for (j=i-1; j>=0; j--) {
			if(s[i]==s[j]) {
				issame=1;
				break;
			}
		}
		if(issame==1) {
			counter++;
			issame=0;
		}
	}
	length-=counter;
	if (length%2==0) cout<<"CHAT WITH HER!";
	else cout<<"IGNORE HIM!";

  return 0;
}
