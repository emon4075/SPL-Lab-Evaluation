#include<bits/stdc++.h>
using namespace std;
int main(){
  int N;
  cout<<"Enter a Number: ";
  cin>>N;
  vector<int> V;
  for (int i = 2; i <=N; i++) {
    int count=0;
    for (int j = 2; j < i; j++) {
      if (i%j==0) {
        count++;
      }
    }
    if (count==0) {
      V.push_back(i);
    }
  }
  for (int i = 0; i < V.size(); i++) {
    for (int j = 0; j < V.size(); j++) {
      if (V[i]*V[j]==N) {
        cout<<"It is A Semi Prime Number"<<endl;
        return 0;
      }
    }
  }
  cout<<"Not A Semi Prime"<<endl;
  return 0;
}
