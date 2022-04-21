
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int MaximumArea(vector<int> &height)
{
    int n = height.size();
    int i=0 , j=n-1;
    int max_area=0,cArea=0;
    
    while(i<j)
    {
        cArea= (j-i)*min(height[i],height[j]);
        if(max_area<cArea)
        {
            max_area=cArea;
        }
        if(height[i]<height[j])
        {
            i++;
        }
        else
        {
            j--;
        }
      
    }
    return max_area;
}
int main()
{
   vector<int> height;
   int temp,s,t;
   
   cin>>t;
   while(t--)
   {
   cin>>s;
   for(int i=0;i<s;i++)
   {
   cin>>temp;
   height.push_back(temp);
   }
   int maxWater=MaximumArea(height);
   cout<<maxWater;
 
  }
}