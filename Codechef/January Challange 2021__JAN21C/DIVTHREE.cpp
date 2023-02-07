#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	int n,k,d;
	int total=0;
	cin>>t;
	
	while (t--)
    {
        cin>>n>>k>>d;
        int A[n];
        
        for (int i=0; i<n; i++)
        {
            cin>>A[i];
        }
        
        for (int i=0; i<n; i++)
        {
            total += A[i];
        }
        
        int count=total/k;
        
        if (count<1)
            cout<<0<<endl;
        else
        {
            if (d<count)
                cout<<d<<endl;
            else
            {
                cout<<count<<endl;
            }
        }
        total = 0;
    }
	
	return 0;
}
