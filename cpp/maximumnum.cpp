#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	int n;
    cin>>n;
	while(n--) {
	
	cout<<"enter three number";
	cin>>a>>b>>c;
//	if(a>b){
//		if(a>c){
//		
//		cout<<"a is maximum";
//	}
//}
//	else{
//		cout<<"c is maximum";
//	}
//	if(b>c){
//		cout<<"b is maximum";
//		
//	}
//	else{
//		cout<<"c is maximum";
//	}
//


if((a>=b)&&(a>=c))
{
	cout<<"a is maximum";
}
else if ((b>=a)&&(b>=c)){
	cout<<"b is maximum";
}
else{
	cout<<"c is maximum";
}
}
	return 0;
}
