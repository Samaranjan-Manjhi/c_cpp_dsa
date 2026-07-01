/*

Trapping Rain Water 

 Problem statement
You have been given a long type array/list 'arr’ of size 'n’.
It represents an elevation map wherein 'arr[i]’ denotes the elevation of the 'ith' bar.
Print the total amount of rainwater that can be trapped in these elevations.

Note :
The width of each bar is the same and is equal to 1.

Example:
Input: ‘n’ = 6, ‘arr’ = [3, 0, 0, 2, 0, 4].
Output: 10

Explanation: Refer to the image for better comprehension:

Note :
You don't need to print anything. It has already been taken care of. Just implement the given function.

Sample Input 1:
4
2 1 1 4
Sample Output 1:
2
Explanation Of Sample Input 1:
Water trapped by:
     block of height 2 is 0 units.
     block of height 1 is 1 unit.
     block of height 1 is 3 1 unit. 
     block of height 4 is 3 0 units.
Hence the total is 2.

Sample Input 2:
5
8 1 8 2 4 
Sample Output 2:
9
Explanation Of Sample Input 2:
Water trapped by:
     block of height 8 is 0 units.
     block of height 1 is 7 units.
     block of height 8 is 0 units. 
     block of height 2 is 2 units.
     block of height 4 is 0 units.
Hence the total is 9.

Expected Time Complexity:
The expected time complexity is O(n).

Constraints :
0 <= n <= 10^6
0 <= arr[i] <= 10^9
Time Limit: 1 sec

*/

#include <iostream>
#include <vector>

using namespace std;

long long getTrappedWater(vector<long long>& arr, int n) 
{
    // Write your code here.
     int maxi = arr[n-1], l = 0, r = 0;
     long long total = 0;
     for(int i=n-2;i>=0;i--)
     {
          r = n-1;
          if(arr[i] > maxi)
          {
               l = i;
               int temp = min(maxi, arr[i]);
               total = total + temp*(r-l);
               for
          }
     }
}

int main()
{
int n;
cout << "Enter Vector Size: ";
cin >> n;

vector<long long> v(n);
for(int i=0;i<n;i++)
     cin >> v[i];

long long res = getTrappedWater(v, n);
cout << "    Result:- " << res << endl;

return 0;
}
