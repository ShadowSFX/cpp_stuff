#include <bits/stdc++.h>
using namespace std;

void test_case(){
    int n, a=0, b=0;
    cin >> n;
	string s;
    cin >> s;

    for (int i = 0; i < n; i++){
        if (s[i] =='A')
            a++;
        else
            b++;
    }

    if ( a > b)
        cout << "Anton";
    else if (b > a)
        cout << "Danik";
    else
        cout << "Friendship";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	test_case();
}
