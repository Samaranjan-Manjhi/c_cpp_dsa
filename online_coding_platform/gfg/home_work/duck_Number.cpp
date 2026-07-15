/*

   Duck Number

   A Duck number is a positive number which has zeroes present in it, For example, 3210, 8050896, 70709 are all Duck numbers. A number with only leading 0s is not considered as Duck Number. For example, numbers like 035 or 0012 are not considered as Duck Numbers.
   The task is to check whether the given number num is a Duck number or not.

Examples:

Input: num = 707069
Output: YES
Explanation: 707069 contains a non-leading 0.

Input: num = 02364
Output: NO
Explanation: Contains leading 0.

Constraints :
1 ≤ Length of num ≤ 104

 */


#include <iostream>
#include <string>

using namespace std;

bool check_duck(string num) 
{
     // code here
     if(num[0] >= '1' && num[0] <= '9')
          return true;
     return false;    
}

int main()
{
     string s;
     cout << "Enter Input String: ";
     getline(cin, s);

     bool res = check_duck(s);
     cout << "     Result:- ";
     if(res)
          cout << "  Yes\n";
     else
          cout << "  Nope\n";

     return 0;
}
