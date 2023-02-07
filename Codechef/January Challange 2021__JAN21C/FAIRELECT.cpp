#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	   
    int t;
    cin>>t;
    	while(t--)
		{

    		int n,m;
    		cin>>n>>m;
    		int a[n],b[m];
    		int x=0,y=0;
    		int count=0;
    		for(int i=0;i<n;i++){

    			cin>>a[i];
    			x+=a[i];
    		}
    		for(int i=0;i<m;i++){

    			cin>>b[i];
    			y+=b[i];
    		}
    		
    		if(x>y)
    		{
    			cout<<0<<endl;
    		}
			else
			{
    			sort(a,a+n);
    			sort(b,b+m);
    			reverse(b,b+m);
    			int j=0;
    			
    			for (int i = 0; i < n; ++i)
    			{

    				if(j<m)
					{
    					x=x-a[i]+b[j];
    					y=y-b[j]+a[i];
    					swap(a[i],b[j]);
    					count++;
    					j++;
    					if(x>y)
    						break;
    				}
    			}
    			if(x>y)
    				cout<<count<<endl;
    			else
    				cout<<-1<<endl;
    		}
    }
	return 0;
}