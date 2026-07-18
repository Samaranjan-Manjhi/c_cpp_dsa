/*

Day 7 : Langford Pairing

 Problem statement

You are given a positive integer N. Return a list of integers of size 2N containing all the integers from 1 to N (both inclusive) twice arranged according to Langford pairing. If no such pairing exists return -1 is the only list element.
Note:

There may be more than one Langford pair possible, you need to return anyone permutation.

For example:

For N = 4, one possible Langford pairing will be:-

Detailed explanation ( Input/output format, Notes, Images )
Constraints:

1 <= T <= 5
0 <= N <= 32

Time Limit: 1 sec

Sample Input 1:

2
4
5

Sample Output 1:

4 1 3 1 2 4 3 2 
-1

Explanation For Sample Input 1:

For the first test case:

For the second test case:
No Langford pairing is possible, hence print -1.

Sample Input 2:

1
15

Sample Output 2:

15 13 14 8 5 12 7 11 4 10 5 9 8 4 7 13 15 14 12 11 10 9 6 3 1 2 1 3 2 6

*/


#include <iostream>
#include <vector>

using namespace std;

vector<int> findLangford(int n) 
{
    // Write your code here.

    vector<int> result;

    return result;
}

int main() {
    int n;

    cout << "Enter value of n: ";
    cin >> n;

    vector<int> result = findLangford(n);

    cout << "Result: ";

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    cout << endl;

    return 0;
}
