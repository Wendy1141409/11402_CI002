#include<iostream>
using namespace std;
int main(){
  int n;
 	 while(cin>>n&&n!=0){
      	 int a[100],m=n,j=-1,num=0;
     	 for(int i=0;m>0;i++){
        	a[i]=m%2;
        	if(m==1){
         		 a[i+1]=1;j++;m=-1;break;}
      			 m/=2;j++;
     	 }
    	cout<<"The parity of ";
 		 for(int i=j;i>=0;i--){
  		    cout<<a[i];
    		if(a[i]==1)
     			num++;
 		 }
 		 cout<<" is "<<num<<" (mod 2)."<<endl;
 		 }
    return 0;}
