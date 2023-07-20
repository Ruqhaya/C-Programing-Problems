#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t,n;
    cin>>t;
    while(t!=0)
    {
      cin>>n;
      if(n%4==0 && n%100!==0)
      {
        cout<<"Yes"<<endl;
      }
      else if(n%400==0 && n%100==0)
      {
      	cout<<"Yes\n";
	  }
      else
      {
        cout<<"No"<<endl;
      }
      t--;
    }
    
    return 0;
  }
