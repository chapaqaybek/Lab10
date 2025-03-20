#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Problem 1
// int main() {
//     int n, sum = 0;
//     cout << "Enter the number of integers: ";
//     cin >> n;
//
//     vector<int> numbers(n);
//     cout << "Enter " << n << " integers: ";
//
//     for (int i = 0; i < n; i++) {
//         cin >> numbers[i];
//         sum += numbers[i];
//     }
//
//     cout << "Sum = " << sum << endl;
//     return 0;
// }

// Problem 2
// double calculateAverage(const vector<int>& numbers) {
//     int sum = 0;
//     for (int num : numbers) {
//         sum += num;
//     }
//     return numbers.empty() ? 0 : static_cast<double>(sum) / numbers.size();
// }
//
// int main() {
//     int n;
//     cout << "Enter the number of integers: ";
//     cin >> n;
//
//     vector<int> numbers(n);
//     cout << "Enter " << n << " integers: ";
//
//     for (int i = 0; i < n; i++) {
//         cin >> numbers[i];
//     }
//
//     cout << "Average = " << calculateAverage(numbers) << endl;
//     return 0;
// }

// Problem 3
// int findMinimum(const vector<int>& numbers) {
//     int minVal = numbers[0];
//     for (int num : numbers) {
//         if (num < minVal) {
//             minVal = num;
//         }
//     }
//     return minVal;
// }
//
// int main() {
//     int n;
//     cout << "Enter the number of integers: ";
//     cin >> n;
//
//     vector<int> numbers(n);
//     cout << "Enter " << n << " integers: ";
//
//     for (int i = 0; i < n; i++) {
//         cin >> numbers[i];
//     }
//
//     cout << "Min = " << findMinimum(numbers) << endl;
//     return 0;
// }

// Problem 4
// int indexOfLargestElement(double array[], int size) {
//     if (size <= 0) {
//         return -1;
//     }
//
//     int maxIndex = 0;
//     for (int i = 1; i < size; i++) {
//         if (array[i] >= array[maxIndex]) {
//             maxIndex = i;
//         }
//     }
//     return maxIndex;
// }
//
// int main() {
//     const int size = 15;
//     double numbers[size];
//
//     cout << "Enter " << size << " numbers: ";
//     for (int i = 0; i < size; i++) {
//         cin >> numbers[i];
//     }
//
//     int index = indexOfLargestElement(numbers, size);
//     cout << "Index of largest element: " << index << endl;
//
//     return 0;
// }

// Problem 5
// bool strictlyEqual(const int list1[], const int list2[], int size) {
//     for (int i = 0; i < size; i++) {
//         if (list1[i] != list2[i]) {
//             return false;
//         }
//     }
//     return true;
// }
//
// int main() {
//     int size;
//     cout << "Enter the size of the lists: ";
//     cin >> size;
//
//     int list1[size], list2[size];
//
//     cout << "Enter elements for list1: ";
//     for (int i = 0; i < size; i++) {
//         cin >> list1[i];
//     }
//
//     cout << "Enter elements for list2: ";
//     for (int i = 0; i < size; i++) {
//         cin >> list2[i];
//     }
//
//     if (strictlyEqual(list1, list2, size)) {
//         cout << "The lists are strictly identical." << endl;
//     } else {
//         cout << "The lists are not strictly identical." << endl;
//     }
//
//     return 0;
// }

// Problem 6
// int main() {
//     int frequency[26] = {0}; // Array to store frequencies of 'a' to 'z'
//     char ch;
//
//     cout << "Enter a sequence of characters (enter '0' to stop): ";
//
//     while (cin >> ch && ch != '0') {
//         if (ch >= 'a' && ch <= 'z') {
//             frequency[ch - 'a']++;
//         }
//     }
//
//     cout << "Letter frequencies:" << endl;
//     for (int i = 0; i < 26; i++) {
//         if (frequency[i] > 0) {
//             cout << char('a' + i) << ": " << frequency[i] << endl;
//         }
//     }
//
//     return 0;
// }

// Problem 7
// int main() {
//     int n;
//     cout << "Enter the number of integers: ";
//     cin >> n;
//
//     vector<int> numbers(n);
//     cout << "Enter " << n << " integers: ";
//
//     for (int i = 0; i < n; i++) {
//         cin >> numbers[i];
//     }
//
//     sort(numbers.begin(), numbers.end());
//
//     cout << "Sorted output: ";
//     for (int num : numbers) {
//         cout << num;
//     }
//     cout << endl;
//
//     return 0;
// }

// Problem 8
// int main() {
//     const int rolls = 10000;
//     int frequency[6] = {0};
//
//     srand(time(0)); // Seed for random number generation
//
//     for (int i = 0; i < rolls; i++) {
//         int roll = rand() % 6 + 1; // Generate number between 1 and 6
//         frequency[roll - 1]++;
//     }
//
//     cout << "Roll frequencies:" << endl;
//     for (int i = 0; i < 6; i++) {
//         cout << (i + 1) << ": " << frequency[i] << endl;
//     }
//
//     return 0;
// }

// Problem 9
// void reverseArray(int arr[], int start, int end) {
//     while (start < end) {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }
//
// int main() {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//
//     int arr[n];
//     cout << "Enter " << n << " elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//
//     reverseArray(arr, 0, n - 1);
//
//     cout << "Reversed array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//
//     return 0;
// }

// Problem 10
bool isSorted(const vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << (isSorted(arr) ? "YES" : "NO") << endl;

    return 0;
}