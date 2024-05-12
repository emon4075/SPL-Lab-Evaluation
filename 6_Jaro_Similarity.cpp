#include<bits/stdc++.h>
using namespace std;
int main(){
  string S1,S2;
  cout<<"Enter The First String: ";
  cin>>S1;
  cout<<"Enter The Second String: ";
  cin>>S2;
  int S1_Length=S1.length();
  int S2_Length=S2.length();
  int Mini=min(S1_Length,S2_Length);
  int Matching=0;
  string Common1="";
  string Common2="";
  if (Mini == S1_Length) {
    for (int i = 0; i < Mini; i++) {
      for (int j = 0; j < S2_Length; j++) {
        if (S1[i]==S2[j]) {
          Matching++;
          Common1+=S1[i];
        }
      }
    }
  }
  else{
    for (int i = 0; i < Mini; i++) {
      for (int j = 0; j < S1_Length; j++) {
        if (S2[i]==S1[j]) {
          Matching++;
          Common2+=S2[i];
        }
      }
    }
  }
  if (Matching==0) {
    cout<<"Jaro Similarity: "<<0<<endl;
  }
  else{
    if (Common1.empty()) {
      for (int i = 0; i < S1_Length; i++) {
        for (int j = 0; j < Common2.length(); j++) {
          if (S1[i]==Common2[j]) {
            Common1+=S1[i];
          }
        }
      }
    }
    else {
      for (int i = 0; i < S2_Length; i++) {
        for (int j = 0; j < Common1.length(); j++) {
          if (S2[i]==Common1[j]) {
            Common2+=S2[i];
          }
        }
      }
    }
  }
  int T=0;
  for (int i = 0; i < Common1.length(); i++) {
    if(Common1[i]!=Common2[i]){
      T++;
    }
  }
  T=T/2;
  float Jaro_Sim=(1/3.0)*((Matching/(float)S1_Length)+(Matching/(float)S2_Length)+((Matching-T)/(float(Matching))));
  cout<<Jaro_Sim<<endl;
  return 0;
}
