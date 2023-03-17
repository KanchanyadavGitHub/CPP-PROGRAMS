#include<iostream>
#include<math.h>
using namespace std;
void checkprime(int n){
	int flag=0;
for(int i=2;i<sqrt(n);i++)
{
	cout<<i<<endl;
	if(n%i==0){
		cout<<"number is not prime";
		flag=1;
		break;
	}	
}
if(flag==0){
	
		cout<<"number is prime";
	}	
}
int main()
{
	int n;
	cin>>n;
	checkprime(n);
	return 0;
}
