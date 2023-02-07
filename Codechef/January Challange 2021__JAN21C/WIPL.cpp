#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n,k;
        int sum1=0;
        int sum2=0;
        int count1=0;
        int count2=0;
        int doge=0;
        cin>>n>>k;

        int H[n];

        for (int i=0; i<n; i++)
        {
            cin>>H[i];
        }

        sort (H, H+n);
        reverse (H,H+n);

        for (int i=0; i<n; i++)
        {
            sum1 += H[i];
            count1 +=1;
            if (sum1>=k)
            {
                doge = n-count1;
                for (int j=doge; j<n; j++)
                {
                sum2 += H[j];
                count1 +=1;
                if (sum2>=k)
                    break;
                }
            }  

            if (sum1+sum2>=k)
                break;
        }
        cout<<count1<<endl;
    }
    return 0;
}