#include <bits/stdc++.h>
using namespace std;

void test_case(){
	string s, s2, s3;
    cin >> s;
    cin >> s2;

    for (int i = (int)s.length()-1; i >= 0 ; i--) s3 += s[i];

    if (s2.compare(s3) == 0)
        cout << "YES";
    else
        cout << "NO";

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	test_case();
}
