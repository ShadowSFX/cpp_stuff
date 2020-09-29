#include <bits/stdc++.h>
using namespace std;
 
void test_case() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  
	
	int p, m, b;
	cin >> p >> m >> b;
	
	int c=0;
	for (int i=1; i <= b; i++) c += i*p;
	
	cout << (m > c ? 0 : abs(m - c));
}
 
int main() {
	test_case();
}
