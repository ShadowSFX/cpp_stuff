#include <bits/stdc++.h>
using namespace std;

void test_case(){
    int n;
    cin >> n;

    int rep = 0;
    do{
        n++;
        rep = 0;
        string a = to_string(n);
        for (int i = 0 ; i < 4; i++){
            for (int k = 0; k < 4; k++){
                if (a[i] == a[k]) rep++;
            }
        }
    }while (rep > 4);
    cout << n;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	test_case();
}
