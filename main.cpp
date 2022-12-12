#include <iostream>

int main(){
int n;
cin>>n;
float a[n];
float x;
for(int i=0; i<n; i++){
    cin>>x;
    a[i]=x;
}
cout<<max(a,n);
    return 0;
}
