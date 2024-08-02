#include <iostream>
using namespace std;

int N, A[109];
bool answer = false;

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) cin >> A[i];
    
    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int h = j + 1; h < N; h++) {
                if (A[i] + A[j] + A[h] == 1000) {
                    answer = true;
                }
            }
        }
    }

    if (answer) cout << "yes" << endl;
    else cout << "no" << endl;

    return 0;
}
