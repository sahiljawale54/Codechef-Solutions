#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int a, b ;
	    cin>>a>>b;
	    
	    int mid = (a+b)/2;
	    cout<<max(abs(a-mid), abs(b- mid))<<"\n";
	}
	return 0;
}
