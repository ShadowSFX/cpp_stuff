#include <bits/stdc++.h>
using namespace std;

void test_case(){
    int n;
    cin >> n;

    if (n == 1)
        cout << "I hate it";
    else{
        for (int i = 0; i < n; i++) {
            if ( i % 2 == 0)
                cout << "I hate ";
            else
                cout << "I love ";

            if (i != n -1)
                cout << "that ";
            else
                cout << "it";
        }
    }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	test_case();
}
