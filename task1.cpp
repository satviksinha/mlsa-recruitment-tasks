#include <iostream>

using namespace std;

int main()
{
 int x,y,z;
 cout<<"Enter x y and z";
 cin>>x>>y>>z;
 if(x-(y%x)>z)
{
 cout<<"NO";
} 
else
{
 cout<<"YES";
}
   return 0;
}
