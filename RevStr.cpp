#include<iostream>
using namespace std;
int main(){
string str;
cin>>str;
for(int i=0;i<str.size()/2;i++){
  char ch=str[i];
  str[i]=str[str.size()-1-i];
  str[str.size()-1-i]=ch;
}
cout<<str<<endl;
return 0;
}