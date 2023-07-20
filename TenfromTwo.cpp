#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int n,t;
    cin>>t;
    while(t!=0)
    {
      cin>>n;
      if(n>=10)
      {
        if(n%10==0)
        {
          cout<<"0"<<endl;
        }
        else
        {
          // int count;
          // for(int x=n;x%10==0;x*2)
          // {
          //   count++;
          // }
          cout<<"1"<<endl;
        }
      }
      else{
        cout<<"-1"<<endl;
      }
      t--;
    }
    
    return 0;
  }
