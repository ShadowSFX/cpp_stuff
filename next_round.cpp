#include <bits/stdc++.h>
using namespace std;
 
void test_case() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  
	
	vector<int> scores;
	int n, k;
	cin >> n;
	cin >> k;
	
	k = n - k;
	
	for (int i = 0; i < n; i++){
		int x;
		cin >> x;
		scores.push_back(x);
	}
	
	sort(scores.begin(), scores.end());
	
	int c = 0;	
		
	for (int i = (int)scores.size()-1; i >= 0; i--){
		if (scores.at(i) >= scores.at(k) && scores.at(i) != 0)
			c++;
		else
			break;
	}

	cout << c;
	
}
 
int main() {
	test_case();
}
