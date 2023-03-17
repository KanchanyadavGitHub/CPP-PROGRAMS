#include<iostream>
using namespace std;
int main(){
	int n ,i;
	cin>>n;
	for(i=1;i<=n;i++){ 
	    for(int s=1;s<=n-i;s++){
	    	cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
		
	}
	}
//		for(int j=1;j<=i;j++){
//			if(i<=n-i)
//			cout<<" ";
//			else
//			cout<<"*";
//		}
//			cout<<endl;
//	}
//
//}
