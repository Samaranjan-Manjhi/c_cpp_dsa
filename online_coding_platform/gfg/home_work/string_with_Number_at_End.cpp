/*

   String with Number at End

   Given string s that is appended with a number at last. The task is to check whether the length of string excluding that number is equal to that number.

Examples:

Input:  s = "geeks5"
Output: 1
Explanation: Length of geeks is 5 and the last number is also 5.

Input:  s = "geek5"
Output: 0
Explanation: Length of geek is 4 and the last number is 5.

Constraints:
1 <= |s| <= 105

 */


#include <iostream>
#include <string>
using namespace std;

int isSame(string &s) 
{
     // code here
     int cnt = 0;
     int n = s.length();
     cnt = s[n-1] - '0';
     if(n-1 == cnt)
          return 1;

     return 0;
}

int main() 
{
     string s;

     cout << "Enter string: ";
     cin >> s;

     int result = isSame(s);

     cout << "Result: " << result << endl;

     return 0;
}
