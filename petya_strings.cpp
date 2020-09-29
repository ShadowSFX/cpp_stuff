#include <bits/stdc++.h>
using namespace std;
 
void test_case() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  
	
	string s;
	string s2;
	cin >> s;
	cin >> s2;
	
	int x;
	for (int i = 0; i < (int)s.length(); i++){
		if (toupper(s[i]) == toupper(s2[i])) 
			x = 0;
		else if (toupper(s[i]) < toupper(s2[i])){
			x = -1;
			break;
		}else{
			x = 1;
			break;
		}
	}
	
	cout << x;
}
 
int main() {
	test_case();
}
