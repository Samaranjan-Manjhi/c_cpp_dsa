/*

   Problem statement

   You have been given an array/list HEIGHT denoting the heights of ‘N’ adjacent hills. The hills are said to be dangerous if their heights are turbulent.
   A range of hills is turbulent if the comparison sign for their heights flips between each adjacent pair of hills. For example, if HEIGHT = [1, 2, 10, 3, 5, 1, 10, 10], then the hills in index range [1, 6] are turbulent as 2 < 10 > 3 < 5 > 1 < 10.
   Your task is to find the length of the longest dangerous hill range.

Constraints:
1 <= T <= 100
1 <= N <= 5000
0 <= HEIGHT[i] <= 10^5
Where ‘N’ is the number of elements in the array/list.

Time Limit: 1sec

Sample Input 1 :
2
9
9 4 2 10 7 8 8 1 9
4
1 2 1 4
Sample Output 1 :
5
4
Sample Output 1 Explanation:
For the first test case, the longest dangerous hill range is [4, 2, 10, 7, 8].
For the second test case, the longest dangerous hill range is [1, 2, 1, 4].

Sample Input 2 :
1
2
2 8
Sample Output 2 :
2

 */


#include <iostream>
#include <vector>

using namespace std;

int longestDangerousRange(vector<int>& height, int n)
{   
     // Write your code here

}

int main()
{



     return 0;
}
