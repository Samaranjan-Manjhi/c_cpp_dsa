/*
   Two Sum — find pair with given target sum (brute force then hashmap)
   Asked at: Amazon, Microsoft, Google, Adobe, Flipkart
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> two_sum(const vector<int>& v, int t)
{
     int n = v.size();
     vector<pair<int, int>> out;
     int l = 0, r = n-1;
     while(l < r)
     {
          int curr_sum = v[l]+v[r];
          if(curr_sum == t)
          {
               out.push_back({v[l], v[r]});
               l++;
               r--;
          }
          else if(curr_sum < t)
          {
               l++;
          }
          else 
          {
               r--;
          }
     }
     return out;
}

void print(vector<int> v)
{
     for(int i=0;i<v.size();i++)
     {
          cout << v[i] << " ";
     }
     cout << endl;
}

int main()
{
     int n, val;
     cout << "Enter Number: ";
     cin >> n;
     if(n == 0)
          return 0;
     vector<int> v;
     for(int i=0;i<n;i++)
     {
          cin >> val;
          v.push_back(val);
     }
     int tar;
     cout << "Enter Target: ";
     cin >> tar;
     sort(v.begin(), v.end());
     print(v);
     vector<pair<int, int>> res = two_sum(v, tar);
     for(int i=0;i<res.size();i++)
     {
          cout << res[i].first << "  " << res[i].second << endl;
     }
     return 0;
}
