#include<iostream>
using namespace std;
int fact(int n){
	return (n==1||n==0)?1:n*fact(n-1);
	}

int main(){
	int n;
	cin>>n;
	cout<<n<<endl<<fact(n);
	return 0;
	
}
