#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int solve(vector<int>& v, int n)
{
	vector<int> lis(n, 1);
	int i, j, max = 0;
	for (i = 0; i < v.size(); i++)
		for (j = 0; j < i; j++)
			if (v[j] <= v[i] && lis[j] + 1 > lis[i])
				lis[i] = lis[j] + 1;
	for (i = 0; i < v.size(); i++)
		max = max > lis[i] ? max : lis[i];
	return max;
}

int main()
{
	int n, m, i;
	double x;
	cin >> n >> m;
	vector<int> arr(n);
	for (i = 0; i < n; i++)
		cin >> arr[i] >> x;
	cout << n - solve(arr, n) << endl;
}
