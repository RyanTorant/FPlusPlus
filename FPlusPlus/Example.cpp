// Some simple examples to show the usage
#include <vector>
#include <list>
#include <iostream>
#include <string>

#include "zip.h"
#include "enumerate.h"

using namespace std;
using namespace fpp;

int main()
{
	vector<int> v0 = { 1, 2, 3 };
	list<string> l0 = { "5", "4", "3", "2", "1" };

	for (auto [x, y] : zip(v0, l0))
		cout << x << " " << y << ",";
	cout << endl;

	for (auto [idx, v] : enumerate(l0))
		cout << "    l0[" << idx << "] = " << v << endl;

	vector<int> v1 = { -1, 1, -1, 1, -1 };
	for (auto [idx, v] : enumerate(v1))
		v += idx;
	for (auto v : v1) cout << v << ",";
	cout << endl;
	
	int cv[4] = { -1, -2, -3, -4 };
	for (auto [idx, v] : enumerate(cv))
		cout << idx << " : " << v << ",";
	cout << endl;


	int vx[4] = { 1, 2, 3, 4 };
	int vy[4] = { -1, -2, -3, -4 };
	for (auto [x, y] : zip(vx, vy))
		swap(x, y);
	for (auto[x, y] : zip(vx, vy))
		cout << x << " " << y << endl;

    return 0;
}

