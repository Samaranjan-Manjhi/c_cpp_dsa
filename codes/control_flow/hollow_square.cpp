/*
Print hollow square pattern of size N using *
             Asked at: TCS, Wipro
*/
#include <iostream>
using namespace std;
int main()
{
int n = 4;
for(int i=1;i<=n;i++)
{
     for(int j=1;j<=n;j++)
     {
          for(int k=2;k<n;k++)
               cout << " ";
          cout << "*";
     }
     cout << endl;
}
cout << endl;

return 0;
}
