#include <fstream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	ifstream in{ "mowing.in" };
	ofstream out{ "mowing.out" };

	int n, x = 0, y = 0, v, a, t, p;
	string Q;
	in >> n; 

	vector<pair<int, int>> s;
	
	for (int i{}; i < n; ++i) {
		in >> Q;
		in >> v;

		for (int j{}; j < v; ++j) {
			t++;
			if (Q == "N") { y++; }
			if (Q == "E") { x++; }
			if (Q == "S") { y --; }
			if (Q == "W") { x --; }

			s[i].first = x;
			s[i].second = y;

			if (count(s.begin(), s.end(), (x, y)) > 1) {
				a = min(a, t - )
			}
				;
		}
	}
}