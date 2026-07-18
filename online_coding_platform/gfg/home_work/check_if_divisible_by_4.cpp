/*

Check if divisible by 4

Given a number in form of  a string s. Check whether it is divisible by 4 or not.

Examples :

Input: s = "1124"
Output: true
Explanation: The number is divisible by 4 as 1124 % 4 = 0.

Input: s = "7"
Output: false
Explanation: The number is not divisibly by 4 as 7 % 4 = 3.

Constraints:
1 ≤ |s| ≤ 10^5

*/


#include <iostream>
#include <string>
using namespace std;

bool divisibleBy4(string s) {
    // code here
    return false;
}

int main() {
    string s;

    cout << "Enter string: ";
    cin >> s;

    bool result = divisibleBy4(s);

    cout << (result ? "Divisible by 4" : "Not divisible by 4") << endl;

    return 0;
}
