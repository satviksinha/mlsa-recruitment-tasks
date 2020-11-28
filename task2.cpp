#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,k,i,j,count=0,flag,l=0,c,p;
    char s[50],dum[50],temp[100];
    cout<<"Enter the values of n and k"<<endl;
    cin>>n>>k;
    cout<<"Enter the string"<<endl;
    cin>>s;
    cout<<"Enter the "<< k<<" characters";
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
    for(int len=1;len<=n;len++)
    {
      for(i=0;i<=(n-len);i++)
      {
        j= i+len-1;
        for(int w=i;w<=j;w++)
        {
        temp[l]=s[w];
        l++;
        }
        temp[l]=' ';
        l++;
      }
    }
    c=l;
    i=0; j=0;
    while(i!=c)
    { p=0;
     for(j=i;j!=' ';j++)
     {
       if(temp[j]=='A')
         p=1;
     }
     if(p!=1)
     {
      for(k=i;k!=' ';k++)
      cout<<temp[k];
      i=k+1;
     }
     else
     {
     i=j+1;
     }
    }
    
    return 0;
}
