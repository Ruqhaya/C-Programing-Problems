#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int x,y,z;
    cin>>x>>y>>z;
    int max = (x>y)?x: (y>z)?y:z;
    int min = (x<y)?x: (y<z)?y:z;
    if(x!=max && x!=min)
    {
      cout<<x;
    }
    else if(y!=max && y!=min)
    {
      cout<<y;
    }
    else{ cout<<z;}
    return 0;
  }
