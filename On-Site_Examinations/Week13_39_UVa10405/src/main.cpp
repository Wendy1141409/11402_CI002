#include <iostream>
#include <cstring>
using namespace std;
int dp[1001][1001] = { 0 };
int main() {
	char str1[1000], str2[1000];
	int len1, len2;
	while (cin.getline(str1, 1000)) {
		cin.getline(str2, 1000);
		len1 = strlen(str1);
		len2 = strlen(str2);
		for (int i = 1;i <= len1;i++) {
			for (int j = 1;j <= len2;j++) {
				if (str1[i - 1] == str2[j - 1])
					dp[i][j] = dp[i - 1][j - 1] + 1;
				else
					dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
			}
		}
		cout << dp[len1][len2] << endl;
	}
	return  0;
}
