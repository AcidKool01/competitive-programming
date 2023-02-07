#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void printfun(int);

int main() {
	// your code goes here
	int t;
	cin>>t;
	int n;
	string s;
	int dec=0;
	char st;
	int rem=0;
	long int i=0;
	int temp;
//	int *arr=new[2500];
	
    while (t--)
    {
        dec=0;
        cin>>n;
        cin>>s;
        
        temp = n/4;
        for(i=0;i<temp;i++){
            for(int j=0;j<4;j++){
                if(s[(i*4)+j]=='1'){
                    if(j==0)
                        dec+=8;
                    else if(j==1)
                        dec+=4;
                    else if(j==2)
                        dec+=2;
                    else if(j==3)
                        dec+=1;
                }
            }
            printfun(dec);
            dec=0;
        }
        cout<<endl;
        dec=0;
        
        // cout<<dec<<endl;

      
        
        // cout<<endl;
        // //
        // dec=0;
        // i=0;
        // rem=0;
    
    }
	return 0;
}

void printfun(int dec){
    char st;
      if (dec==0)
                st = 'a';
                
            else if (dec==1)
                st = 'b';
                
            else if (dec==2)
                st = 'c';
                
            else if (dec==3)
                st = 'd';
                
            else if (dec==4)
                st = 'e';
            
            else if (dec==5)
                st = 'f';
            
            else if (dec==6)
                st = 'g';
                
            else if (dec==7)
                st = 'h';
                
            else if (dec==8)
                st = 'i';
                
            else if (dec==9)
                st = 'j';
                
            else if (dec==10)
                st = 'k';
                
            else if (dec==11)
                st = 'l';
                
            else if (dec==12)
                st = 'm';
                
            else if (dec==13)
                st = 'n';
                
            else if (dec==14)
                st = 'o';
                
            else if (dec==15)
            {
                st = 'p';
            }
            
            cout<<st;
    
}
