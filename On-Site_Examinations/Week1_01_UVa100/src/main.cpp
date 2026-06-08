#include <iostream>
using namespace std;
int rev(int a) {
	if (a == 1)
		return 1;
	else if (a % 2)
		return rev(3 * a + 1)+1;
	else
		return rev(a / 2)+1;
}
int main() {
	int n1, n2;
	while (cin >> n1 >> n2&&n1&&n2) {
		int max = 0;
		if (n1 > n2) {
			swap(n1, n2);
			cout << n2 << " " << n1 << " ";
		}
		else 
			cout << n1<< " " << n2 << " ";
		for (int i = n1;i <= n2;i++)
			max = rev(i) > max ? rev(i) : max;
		cout <<max<<endl;
	}
	return 0;
}
