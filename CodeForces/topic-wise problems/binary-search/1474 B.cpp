#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t,i,n,j;
    cin>>t;
    while(t!=0){
        cin>>n;
        int flag=0;
        
        for(i=n+1; flag==0 ;i++){
            for(j=2; j*j<=i ;j++){
                if(i%j==0)
                break;
            }
            
            if(j*j > i)
            break;
        }
        
        int x=i;
        
        for(i=x+n; flag==0 ;i++){
            for(j=2; j*j<=i ;j++){
                if(i%j==0)
                break;
            }
            
            if(j*j > i)
            break;
        }
        
        cout<<x*i;
        
        if(t!=1)
        cout<<endl;
        t--;
    }
}