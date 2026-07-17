/*

   Find prime numbers

   Problem statement

   You are given a positive integer ‘N’. Your task is to print all prime numbers less than or equal to N.
Note: A prime number is a natural number that is divisible only by 1 and itself. Example - 2, 3, 17, etc.
You can assume that the value of N will always be greater than 1. So, the answer will always exist.

Constraints:
2 <= N <= 10^7
Where ‘N’ is the given positive integer.
Time Limit: 1sec

Sample Input 1 :
7
Sample Output 1 :
2 3 5 7
Sample Output 1 Explanation:
For the given input, all prime numbers from 2 to 7 are 2, 3, 5 and 7.

Sample Input 2 :
30
Sample Output 2 :
2 3 5 7 11 13 17 19 23 29

 */


#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n)
{
     if(n <= 1)
          return false;
     if(n == 2)
          return true;
     if(n%2 == 0)
          return false;
     for(int i=3;i*i<=n;i++)
     {
          if(n%i==0)
               return false;
     }

     return true;

}

vector<int> primeNumbersTillN(int N) 
{ 
     // Write your code here
     vector<int> res;
     for(int i=1;i<=N;i++)
     {
          if(isPrime(i))
               res.push_back(i);
     }

     return res;
}

int main()
{
     int n;
     cout << "Enter N value: ";
     cin >> n;

     vector<int> res = primeNumbersTillN(n);
     if(!res.empty())
     {
          cout << "     Result:- ";
          for(int x : res)
               cout << x << " ";
          cout << endl;
     }

     return 0;
}
