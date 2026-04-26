/*
   Segregate even and odd numbers — evens first, odds second
   Maintain relative order. O(N) time O(1) space.
   Asked at: Amazon, Zoho, TCS
 */

#include <iostream>
#include <vector>
using namespace std;
void segregate_even_odd(vector<int>& v)
{
     int n = v.size();
     int j = 0;
     for(int i=0;i<n;i++)
     {
               cout <<"111-- " << v[i] << "    " << v[j] << endl;
          if(v[i]%2 == 0)
          {
               cout << v[i] << "    " << v[j] << endl;
               swap(v[i], v[j]);
               j++;
          }
     }
}
void printVec(const vector<int>& v)
{
     for(int i=0;i<v.size();i++)
          cout << v[i] << " ";
     cout << endl;
}
int main()
{
     int n;
     cout << "Enter Number: ";
     cin >> n;
     if(n == 0)
          return 0;
     vector<int> v(n);
     for(int i=0;i<n;i++)
          cin >> v[i];
     segregate_even_odd(v);
     printVec(v);
     return 0;
}
