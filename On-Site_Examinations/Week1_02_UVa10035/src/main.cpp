#include <iostream>
using namespace std;
int main() {
	int n1,n2,carry,ans;
	while (cin >> n1 >> n2 && (n1 || n2)) {
		carry = 0;ans = 0;
		while (n1 > 0 || n2 > 0) {
			if (((n1 % 10) + (n2 % 10) + carry) > 9) {
				carry = 1;ans++;
			}
			else
				carry = 0;
			n1 /= 10;n2 /= 10;
		}
		if (ans > 1)
			cout << ans << " carry operations." << endl;
		else if (ans ==1)
			cout << ans << " carry operation." << endl;
		else
			cout << "No carry operation." << endl;
	}
}
