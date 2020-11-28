#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,k,i,j,count=0,flag;
    char s[n],dum[k];
    cout<<"Enter the values of n and k"<<endl;
    cin>>n>>k;
    cout<<"Enter the string"<<endl;
    cin>>s;
    cout<<"Enter the k characters";
    for(i=0;i<k;i++)
    {
        cin>>dum[i];
    }
    for(i=0;i<n;i++)
    { 
        flag=0;
        for(j=0;j<k;j++)
        { 
          if(s[i]==dum[j])
          flag=1; 
        }
        if(flag==0)
        {
          s[i]='A';
        }
    
    }
    for(i=0;i<n;i++)
    {
      for(int len=1;len<=n;len++)
      { 
       
      
          for( j=i;j<=(i+len);j++)
          {
            if(s[i+len]=='A')
            break;
           if(s[j]!='A' && j!=(n-1))
           cout<<s[j];
          }
      
          count++;
         }
      }
      
    
    cout<<count;

    return 0;
}
