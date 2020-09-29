#include <bits/stdc++.h>
using namespace std;
 
void test_case() {
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int ans = 0;
	for (int i=0;i<n;i++){
		int tpv = 0;
		for (int k = 0; k < 3; k++){
			int x;
			cin >> x;
			tpv += x;
		}
		if (tpv >= 2)
			ans ++;
	}
	
	cout << ans;
}
 
int main() {
	test_case();
}
