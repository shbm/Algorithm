#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef vector<LL> VLL;

#define SI(n) scanf("%d", &n)
#define SLL(n) scanf("%lld", &n)
#define SULL(n) scanf("%llu", &n)
#define sortv(v) sort(v.begin(), v.end())
#define sz(v) v.size()
#define pb(x) push_back(x)
#define mp(x, y) make_pair(x, y)
#define f first
#define s second

class fenwickTree {
	VLL tree;
	LL n;
	public:
		fenwickTree(LL N): n(N) {
			LL val;
			tree.resize(n + 10, 0);
			for (LL i = 0; i < n; i++) {
				SLL(val);
				update(i, val);
			}
		}
		void update(LL idx, LL val) {
			idx += 2;
			LL lim = sz(tree);
			while (idx < lim) {
				tree[idx] += val;
				idx += (idx&-idx);
			}
		}
		LL sum(LL idx) {
			LL ret = 0;
			idx += 2;
			while (idx) {
				ret += tree[idx];
				idx -= (idx&-idx);
			}
			return ret;
		}
		LL sum(LL l, LL r) {
			if (l > r)
				swap(l, r);
			return sum(r) - sum(l - 1);
		}
};

int main()
{
	LL n, q;
	SLL(n); SLL(q);
	// n is the size of the array that uses the fenwickTree
	fenwickTree f(n);
	while (q--)
	{
		LL type, x, y;
		SLL(type); SLL(x); SLL(y);
		if (type)
			printf("%lld\n", f.sum(x, y));
		else
			f.update(x, y);
	}
	return 0;
}
