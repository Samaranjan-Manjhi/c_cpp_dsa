#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
int main()
{
     string str; // (a+c*b)+(c)) 
     cout << "Enter Number: ";
     cin >> str;
     stack<char> s;
     int cnt = 0;
     for(char c : str)
     {
          if(c != ')')
               s.push(c);
          else
               break;
     }
     bool isRed = false;
     while(!s.empty)
     {
          if(s.top() == '*' || s.top() == '/' || s.top() == '-' || s.top() == '+')

     }

     return 0;
}
