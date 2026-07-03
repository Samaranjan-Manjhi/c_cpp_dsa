/*

Check Arithmetic Progression

Given an array arr[] of integers. Write a program to check whether an arithmetic progression can be formed using all the given elements. 

Examples:

Input: arr[] = [0, 12, 4, 8]
Output: true
Explanation: Rearrange given array as [0, 4, 8, 12] which forms an arithmetic progression.

Input: arr[] = [12, 40, 11, 20]
Output: false
Explanation: there is no rearrangment which can forms an arithmetic progression.

Constraints:
1 ≤ arr.size() ≤ 10^6
0 ≤ arr[i] ≤ 10^6

*/

#include <iostream>
#include <vector>

using namespace std;

bool checkIsAP(vector<int>& arr) 
{
        // code here
        
}

int main()
{
     int n;
     cout << "Enter Vector Size: ";
     cin >> n;

     vector<int> v(n);
     for(int i=0;i<n;i++)
          cin >> v[i];

     bool res = checkIsAP(v);
     if(res)
          cout << "     Yes\n";
     else
          cout << "     No\n";

     return 0;
}
