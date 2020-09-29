#include <bits/stdc++.h>
using namespace std;
 
void test_case() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  
	
	int c=0, r=0;
	int x;
	for (int i = 0;i < 5; i++){
		r++;
		for (int k = 0; k < 5; k++){
			c++;						
			cin >> x;
			if (x == 1)
				break;
		}
		if (x == 1)
			break;
		c = 0;
	}
	
	cout << abs(3-r) + abs(c-3);
}
 
int main() {
	test_case();
}
