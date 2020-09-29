#include <bits/stdc++.h>
using namespace std;
 
void test_case() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  
	
	vector<int> nums;
	string s, temp="";
	cin >> s;
	
	for (int i=0; i<(int)s.length();i++){
		//~cout << i << " - " << (int)s.length()-1 << "\n";
		if (s[i] != '+' && i != (int)s.length()-1)
			temp += s[i];
		else if (i != (int)s.length()-1){			
			nums.push_back(stoi(temp));
			temp = "";
		}else{			
			temp += s[i];
			nums.push_back(stoi(temp));
		}
	}
	
	sort(nums.begin(), nums.end());
	
	for (int i=0; i < (int)nums.size();i++)
		cout << nums.at(i) << (i != (int)nums.size()-1 ? "+" : ""); 
}
 
int main() {
	test_case();
}
