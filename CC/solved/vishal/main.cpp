#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
int n,i,j,k,x;
cin>>n;
bool repeated;
string str[n];
string temp;
int count;
for(i=0;i<n;++i)
cin>>str[i];

for(i=0;i<n-1;++i)
for(j=i+1;j<n ;++j)
{
if(str[i].compare(str[j])>0)
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
}
}
for(i=0;i<n;)
{
count=1;
//now check for repeating names
for(j=i+1;j<n&&str[i]==str[j];j++)
{
count++;
}
cout<<str[i]<<" "<<count<<endl;
i=j;
}
return 0;
}
