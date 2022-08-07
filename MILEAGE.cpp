#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    float n,x,y,a,b;
	    cin>>n>>x>>y>>a>>b;
	    
	    if((x/a) > (y/b)){
	        cout<<"DIESEL\n";
	    }
	    else if ((x/a) < (y/b)){
	        cout<<"PETROL\n";
	    }
	    else{
	        cout<<"any\n";
	    }
	}
	return 0;
}
