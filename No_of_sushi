#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(vector<long long>& A, vector<long long>& B)
{
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int i = A.size() - 1;
    int j = B.size() - 1;
    int count = 0;

    while (i >= 0 && j >= 0)
    {
        if (B[j] <= 2 * A[i])
        {
            count++;
            i--;
            j--;
        }
        else
        {
            j--;
        }
    }

    return count;
}


int main() {
    int r,c;
    cin>>r;
    cin>>c;
    vector<long long> A(r),B(c);
    for(int i=0;i<r; i++ ) cin>>A[i];
    for(int i=0; i<c; i++) cin>>B[i];
    cout<<solve(A,B);
    
   
}
