/*

   Count characters

   Problem statement

   Write a program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.
   That is, input will be a stream of characters and you need to consider all the characters which are entered till '$'.
   Print count of characters, count of digits and count of white spaces respectively (separated by space).

   Sample Input :
   abc def4 5$
   Sample Output :
   6 2 2
   Sample Output Explanation :
   Number of characters : 6 (a, b, c, d, e, f)
   Number of digits : 2 (4, 5)
   Number of white spaces : 2 (one space after abc and one newline after 4)

 */


#include <iostream>
#include <vector>

using namespace std;

vector<int> countChar(const string& s)
{
     int c = 0, d = 0, w = 0;
     int n = s.length();
     for(int i=0;i<n;i++)
     {
          if(s[i] >= 'a' && s[i] <= 'z')
               c++;
          else if(s[i] >= '0' && s[i] <= '9')
               d++;
          else if(s[i] == ' ')
               w++;
          else if(s[i] == '$')
               break;
     }

     return {c, d, w};
}

int main()
{

     /* Read input as specified in the question.
      * Print output as specified in the question.
      */
     string s;
     cout << "Enter Input String: ";
     getline(cin, s);

     vector<int> res = countChar(s);
     if(!res.empty())
     {
          for(int x : res)
               cout << x << " ";
          cout << endl;
     }

     return 0;  
}
