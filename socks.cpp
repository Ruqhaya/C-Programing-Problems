#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int T,N,tr;
    cin>>T;
    while(T!=0)
    {
        cin>>N;
      if(N==1)
      {
        cout<<2<<endl;
      }
      else
      {
        tr = (N * 2) - 1;
        cout<<tr<<endl;
      }
      T--;
    }
    return 0;
  }
