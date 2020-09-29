#include <bits/stdc++.h>
using namespace std;
 
 void test_case(){
	long long a, b, x, y;
	cin >> a >> b >> x >> y;
	long long m = 0;
	
	m = __gcd(x, y);
	x /= m;
	y /= m;
	
	cout << min( a/x, b/y);
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  
	test_case();
}
