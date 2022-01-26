#include<iostream>
int main()
{int a,b,i;

cout<<”a=”;cin>>a;
cout<<”b=”;cin>>b;
cout<<”Numerele Divizibile cu 3 din intervalul [“<<a<<”,”<<b<<”] sunt: “;
for(i=a;i<=b;i++)
if(i%3==0) cout<<i<<” ”;
return 0;
}
