#include <iostream>
using namespace std;

void generateSubsets(int arr[], int n) {
    int totalSubsets = 1 << n; // 2^n subsets

    for (int mask = 0; mask < totalSubsets; mask++) {
        cout << "{ ";

        for (int i = 0; i < n; i++) {
            if (mask & (1 << i))
                cout << arr[i] << " ";
        }

        cout << "}" << endl;
    }
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nAll Subsets:\n";
    generateSubsets(arr, n);

    return 0;
}
