#include<bits/stdc++.h>
using namespace  std;
int main(){
  int my_Loc_X,my_Loc_Y;
  cout<<"Enter Your Location: ";
  cin>>my_Loc_X>>my_Loc_Y;
  string S;
  cout<<"Enter The Navigation String: ";
  cin>>S;
  for(auto C:S){
    if (C=='U') {
      my_Loc_Y+=1;
    }
    else if(C=='D'){
      my_Loc_Y-=1;
    }
    else if(C=='R'){
      my_Loc_X+=1;
    }
    else{
      my_Loc_X-=1;
    }
  }
  cout<<my_Loc_X<<" "<<my_Loc_Y<<endl;
  return 0;
}
