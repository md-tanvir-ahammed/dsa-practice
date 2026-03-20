#include <iostream>
#include <vector>
using namespace std;

int findMax(vector<int>& arr) {
    int max = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

void reverseArray(vector<int>& arr) {
    int start = 0, end = arr.size() - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    vector<int> arr = {5, 2, 8, 1, 9, 3};

    cout << "Max element: " << findMax(arr) << endl;

    reverseArray(arr);
    cout << "Reversed array: ";
    for (int x : arr)
        cout << x << " ";

    return 0;
}
