#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int n,t,c,count,x;
    cin>>n;
    count=0;
    x=0;
    while(n!=0)
    {
      cin>>t>>c;
      x=c-t;
      if(x>=2)
      {
        count++;
      }
      n--;
    }
    cout<<count;
    
    return 0;
  }
