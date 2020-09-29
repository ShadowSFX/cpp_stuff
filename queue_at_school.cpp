#include <bits/stdc++.h>
using namespace std;
 
 void test_case(){
	int a, b;
	cin >> a >> b;
	
	vector<char> q;
	for (int i = 0; i < a; i++){
		char x;
		cin >> x;
		q.push_back(x);
	}
	
	
	for (int i = 0; i < b; i++){
		int k = 0;
		while (k < a && k != a-1){			
			if (q.at(k) =='B' && q.at(k+1) == 'G'){
				char c = q.at(k);
				q.at(k) = q.at(k+1);
				q.at(k+1) = c;
				k+=2;
			} else
				k++;
		}
	}
	
	for (auto c: q) cout << c;
		
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  
	test_case();
}
