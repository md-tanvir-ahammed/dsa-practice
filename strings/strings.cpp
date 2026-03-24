#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "hello";

    // String length
    cout << "String: " << s << endl;
    cout << "Length: " << s.length() << endl;

    // Count vowels
    int count = 0;
    for (char c : s) {
        if (c=='a' || c=='e' || c=='i' ||
            c=='o' || c=='u') {
            count++;
        }
    }
    cout << "Vowels: " << count << endl;

    // Reverse string
    string rev = s;
    int n = rev.length();
    for (int i = 0; i < n/2; i++) {
        swap(rev[i], rev[n-1-i]);
    }
    cout << "Reversed: " << rev << endl;

    return 0;
}
