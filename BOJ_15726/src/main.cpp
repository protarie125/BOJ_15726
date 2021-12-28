#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	double a, b, c;
	cin >> a >> b >> c;

	if (b < c) {
		cout << static_cast<int>((a / b) * c);
	}
	else {
		cout << static_cast<int>((a * b) / c);
	}

	return 0;
}