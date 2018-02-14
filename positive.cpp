#include<iostream>
using namespace std;
class sign
{
public :
void get()
{
int n;
cout<<"enter number:"<<endl;
cin>>n;
}
void display()
{
if(n>0)
{
cout<<positive;
}
else
{
cout<<negative;
}
}
};
int main()
{
sign s;
s.get();
s.display();
return 0;
}
