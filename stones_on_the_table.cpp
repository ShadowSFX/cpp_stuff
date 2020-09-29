#include <bits/stdc++.h>
using namespace std;
 
void test_case() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  
	
	int x;
	cin >> x;
	
	string s;
	cin >> s;	
	char prev = '-';
	
	int c = 0;
	for (int i=0; i < x;i++){
		if (prev == '-')
			prev = s[i];
		else{
			if (prev == s[i])
				c++;
			else
				prev = s[i];
		}			
	}
	cout << c;
	
}
 
int main() {
	test_case();
}
