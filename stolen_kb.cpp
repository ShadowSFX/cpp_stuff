#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  
	
	int n;
	cin >> n;
	vector<int> k;
	for (int i  = 0; i< n; i++){
		int x;
		cin >> x;
		k.push_back(x);
	}
	sort(k.begin(), k.end());
	
	int c = 0;
	for (int i  = 1; i < n; i++)
		c += k.at(i) - (k.at(i-1) + 1) ;
	
	cout << c;
}
