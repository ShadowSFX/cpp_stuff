#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void test_case(){
	string s;
    cin >> s;

    int n = 0;
    for (int i = 0; i < (int)s.length();i++){
        if (s[i] == '4' || s[i] == '7')
            n++;
    }

    if ( n == 4 || n == 7)
        cout << "YES";
    else
        cout << "NO";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	test_case();
}
