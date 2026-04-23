/*
   Check if two arrays have the same elements (not necessarily same order)
   without sorting — use frequency map
   Asked at: TCS, Wipro
 */

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


int main()
{
     vector<int> v{1, 2, 3, 4, 5};
     vector<int> v1{2, 1, 5, 3, 4};
     unordered_map<int, int> m1;
     unordered_map<int, int> m2;
     for(int x : v)
     {
          m1[x]++;
     }
     for(int x1 : v1)
     {
          m2[x1]++;
     }
     for(auto& mp1 : m1)
     {
          cout << "mp1 --> " << mp1.first << " " << mp1.second << endl;
     }
     for(auto& mp2 : m2)
     {
          cout << "mp2 --> " << mp2.first << " " << mp2.second << endl;
     }
     return 0;
} 
