#include <bits/stdc++.h>
using namespace std;
 
void test_case() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  
	
	string s;
	cin >> s;
	
	map<char, int> m;
	
	for (int i = 0; i < (int)s.length(); i++) m[s[i]] = 1;
	
	if ((int)m.size() % 2 != 0)
		cout << "IGNORE HIM!";
	else
		cout << "CHAT WITH HER!";
}
 
int main() {
	test_case();
}
