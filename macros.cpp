#include <bits/stdc++.h>
using namespace std;
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
	*this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
#define pc(x) putchar_unlocked(x);
 
//assert(L < nxt && R < nxt);   -- Condiciones para ver si resulta V o F
//debug() << imie(L) imie(R);   -- L y R son variables
 
inline void print_num (int n)
{
	if (n < 0) { pc('-'); n *= -1; }
	int N = n, rev, count = 0;
	rev = N;
	if (N == 0) { pc('0'); pc('\n'); return ;}
	while ((rev % 10) == 0) { count++; rev /= 10;} 
	rev = 0;
	while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}
	while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
	while (count--) pc('0'); 
}
 
inline int next_int() {
    int n = 0;
    char c = getchar_unlocked();
    while (!('0' <= c && c <= '9')) {
        c = getchar_unlocked();
    }
    while ('0' <= c && c <= '9') {
        n = n * 10 + c - '0';
        c = getchar_unlocked();
    }
    return n;
}
 
void test_case() {	
	
}
 
int main() {
	test_case();
}
