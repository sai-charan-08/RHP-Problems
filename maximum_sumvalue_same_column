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
    dp[0][i] = arr[0][i];
}
for(int i = 1; i < n; i++)
{
    for(int j = 0; j < n; j++)
    {
       int max  =0;
       for(int k = 0; k <n; k++)
       {
              if(dp[i-1][k]>max && k!=j)
              {
                max = dp[i-1][k];
              }
        }
        dp[i][j] = arr[i][j]+max;
}
}
int ans = 0;
for(int i = 0; i < n; i++)
{
    if(dp[n-1][i]>ans)
    {
        ans = dp[n-1][i];
    }
}
cout<<"The maximum sum is: "<<ans<<endl;
}
