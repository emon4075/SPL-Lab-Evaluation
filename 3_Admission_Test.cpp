#include<bits/stdc++.h>
using namespace std;
int validate(string Str){
  int Counter=1;
  string Word,HSC,SSC;
  stringstream SS(Str);
  while (SS>>Word) {
    if (Counter==1) {
      if (Word!="CU") {
        return 0;
      }
    }
    else if(Counter==2 || Counter==5){
      if (Word.size()==3) {
        for(auto C:Word){
          if (C>='A' && C<='Z') {
            continue;
          }
          else{
            return 0;
          }
        }
      }
      else{
        return 0;
      }
    }
    else if(Counter==4){
      HSC=Word;
    }
    else if(Counter==7){
      SSC=Word;
      int Diff=0;
      for (int i = 0; i < HSC.size(); i++) {
        if (HSC[i]!=SSC[i]) {
          Diff+=abs(HSC[i]-SSC[i]);
        }
      }
      if (Diff<2) {
        return 0;
      }
    }
    Counter++;
  }
  return 1;
}
int main(){
  string S;
  cout<<"Enter Your Message Informations: ";
  getline(cin,S);
  if (validate(S)) {
    cout<<"It is Valid"<<endl;
  }
  else{
    cout<<"Invalid"<<endl;
  }

  return 0;
}
