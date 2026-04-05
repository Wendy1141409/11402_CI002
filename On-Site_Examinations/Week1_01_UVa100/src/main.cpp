#include <iostream>
using namespace std;
int function(int n1,n2){
    int max=0,Max=0;
    for(int i=n1,i<=n2;i++){
    if(i==1)
        max= 1;
    else if(i%2==1)
        max= 1+function(3i+1);
    else
        max=1+function(i/2);
    if(max>Max)
        Max=max;
    return Max;
    }
int main() {
    int n1,n2;
    while(cin>>n1>>n2)
        cout<<n1<<n2<<function(n1,n2)<<endl;
    return 0;
}
