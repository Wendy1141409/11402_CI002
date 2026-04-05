#include<iostream>
using namespace std;
int main() {
    int time, n, list[51];
    cin >> time;
    while (time != 0) {
        time--;
        cin >> n;
        int sum = 0;
        for (int i = 1; i <= n; i++)
            cin >> list[i];
        for (int k = n; k > 0; k--) {
            for (int j = 1; j <n; j++) {
                if (list[j + 1] < list[j]) {
                    int tmp = 0;
                    tmp = list[j];
                    list[j] = list[j + 1];
                    list[j + 1] = tmp;
                    sum++;
                }
            }
        }

        cout << "Optimal train swapping takes " << sum << " swaps." << endl;
    }
    return 0;
}
