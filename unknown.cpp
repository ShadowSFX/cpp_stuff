#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  
	
	int x;
	cin >> x;
	cout << (int)(x / 5) + (x % 5 == 0 ? 0 : 1);
}
