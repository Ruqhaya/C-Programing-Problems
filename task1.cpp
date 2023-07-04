#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;

    cin>>t;

   	for(int i=1;i<=t;i++)
	{

   		int h,m;

   		cin>>h>>m;
  
  		double  h_angle = (h * 360)/12;
  		double  m_angle = (m * 360)/60;


   		double angle= abs(h_angle-m_angle);

   		if(angle<=180)
		{

     		cout<<angle;

     		cout<<endl;

   		}

   		else
		{

     		cout<<(360-angle)<<endl;
   		}
   }
    return 0;
  }
