#include<iostream>

using namespace std;

int pembagian(){
  int a, b;
  int n = 10;
  
  for(i = 0; i < n; i++)
  {
    cout<<"Masukkan nilai a: ";
    cin>>a;
    cout<<endl;
  
    cout<<"Masukkan nilai b: ";
    cin>>b;
    cout<<endl;
    
    cout<<"Hasil : "<<b/a<<endl;
    cout<<endl;
  }
}

int main(){
  pembagian();
  return 0;
}
