#include<iostream>
using namespace std;   
int main ()
{
    int row , col;
    cout<<"Enter the number of rows: "; 
    cin>>row;
    cout<<"Enter the number of columns: ";      
    cin>>col;
    int arr[row][col];  
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout<<"Enter the value of arr["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }
    int a,b;
    cout<<"Enter the index of the first element: ";
    cin>>a;
    cout<<"Enter the index of the second element: ";
    cin>>b;
    
            int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
            int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};
            int sum = 0;
            for (int i = 0; i < 8; i++) {   
                int newRow = a + dr[i];
                int newCol = b + dc[i];
                if (newRow >= 0 && newRow < row && newCol >= 0 && newCol < col) {
                    sum += arr[newRow][newCol];
                }
            }
            cout<<"The sum of adjacent elements is: "<<sum<<endl;
}
