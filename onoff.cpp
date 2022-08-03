#include<bits/stdc++.h>
using namespace std;

void sahiljawale(){
  int n;
  cin>>n;
  string ini,fini;
  cin>>ini;
  cin>>fini;
  int one=0;
  for(int i=0;i<n;i++){
  if(ini[i]!=fini[i]){
    one++;
  }
  }
  if(one%2==0 || one==0){
    cout<<"1\n";
    return;
  }
  cout<<"0\n";
  
}
int main(){
  int tt;
  cin>>tt;
  while(tt--){
    sahiljawale();
  }
  
  return 0;
}