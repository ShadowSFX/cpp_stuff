#include <bits/stdc++.h>
using namespace std;
 
void test_case() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  
	
	int n;
	cin >> n;
	
	string s;
	int x = 0;
	for (int i = 0; i < n; i++){		
		cin >> s;		
		if (s.find("+") != string::npos)
			x++;
		else
			x--;		
	}
	
	cout << x;
}
 
int main() {
	test_case();
}
