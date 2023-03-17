#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter three numbers";
	cin>>a>>b>>c;
	if ((a>=b)&&(a>=c))
	{
		cout<<a,"a is gretest";
	}
	else if((b>=a)&&(b>=c))
	{
		cout<<b,"b is gtretest";
	}
	else
	{
	cout<<c,"c is gtretest";
}
return 1;
}
