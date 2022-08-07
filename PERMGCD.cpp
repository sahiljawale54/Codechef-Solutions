#include <iostream>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	
	while(tc--){
	    int n,x;
	    cin>>n>>x;
	    
	    if(n>x){ cout<<"-1\n";}
	    else{
	        int next = x-(n-1);
	    cout<<next<<" ";
	    for(int i = 1 ; i <= n ; i++){
	        if(next != i ){
	            cout<<i<<" ";
	        }
	    }cout<<"\n";
	        
	    }
	    
	    
	    
	}
	return 0;
}
