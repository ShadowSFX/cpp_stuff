#include <bits/stdc++.h>
using namespace std;
 
void test_case() {
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i=0;i<n;i++){
		string s;
		cin >> s;		
		if (s.length() <= 10)
			cout << s + "\n";
		else
			cout << s[0] << (s.length() - 2) << s[s.length()-1] << "\n";
	}
}
 
int main() {
	test_case();
}
