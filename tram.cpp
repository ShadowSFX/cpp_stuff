#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  
	
	int n, cp = 0, min = 0;
	cin >> n;
		
	for (int i = 1; i <= n; i++){
		int a, b;
		cin >> a >> b;		 
		cp = cp - a + b;		
		if (min < cp) min = cp;	
	}
	
	cout << min;
}
