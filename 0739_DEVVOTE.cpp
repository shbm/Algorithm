#include <bits/stdc++.h>

using namespace std;

void optimizeIO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

int main()
{
	optimizeIO();
	vector<double> v(37);
	v[0] = 0;
	v[1] = 1;
	v[2] = 2;
	v[3] = 2;
	v[4] = 1.777778;
	v[5] = 1.656250;
	v[6] = 1.660800;
	v[7] = 1.733668;
	v[8] = 1.828592;
	v[9] = 1.920742;
	v[10] = 1.999589;
	v[11] = 2.062219;
	v[12] = 2.109256;
	v[13] = 2.142717;
	v[14] = 2.164972;
	v[15] = 2.178301;
	v[16] = 2.184725;
	v[17] = 2.185964;
	v[18] = 2.183446;
	v[19] = 2.178343;
	v[20] = 2.171597;
	v[21] = 2.163963;
	v[22] = 2.156033;
	v[23] = 2.148263;
	v[24] = 2.141000;
	v[25] = 2.134497;
	v[26] = 2.128932;
	v[27] = 2.124422;
	v[28] = 2.121035;
	v[29] = 2.118798;
	v[30] = 2.117709;
	v[31] = 2.117741;
	v[32] = 2.118848;
	v[33] = 2.120971;
	v[34] = 2.124043;
	v[35] = 2.127988;
	v[36] = 2.132728;
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		printf("%.6lf\n", v[n]);
	}
	return 0;
}