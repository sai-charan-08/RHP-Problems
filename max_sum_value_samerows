#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the size of the matrix: ";
cin>>n;
int arr[n][n]; 
for(int i = 0; i <n;i++)
{
    for(int j = 0; j < n; j++)
    {    
        cout<<"Enter the value of arr["<<i<<"]["<<j<<"]: ";
        cin>>arr[i][j];   
    }
}
int dp[n][n];
for(int i = 0; i < n; i++)
{
    dp[i][0] = arr[i][0];
}
for(int j = 1; j < n; j++)
{
    for(int i = 0; i < n; i++)
    {
       int max  =0;
       for(int k = 0; k <n; k++)
       {
              if(dp[k][j -1]>max && k!=i)
              {
                max = dp[k][j-1];
              }
        }
        dp[i][j] = arr[i][j]+max;
}
}
int ans = 0;
for(int i = 0; i < n; i++)
{
    if(dp[i][n-1]>ans)
    {
        ans = dp[i][n-1];
    }
}
cout<<"The maximum sum is: "<<ans<<endl;
}
