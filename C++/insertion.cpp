#include<iostream>
using namespace std;
int main(){
	int i,j,num,arr[40],temp;
	cout<<"Enter The no of element to be sorted"<<endl;
	cin>>num;
	cout<<"Enter the element ";
	for(i=0;i<num;i++){
	
		cin>>arr[i];
	}
	for(i=1;i<num;i++){
		temp=arr[i];
		j=i-1;
		while(temp<arr[j]&&j>=0){
	
		arr[j+1]=arr[j];
		j=j-1;
		
	}
	arr[j+1]=temp;
	}
	cout<<"Sorted elements are"<<" ";
	for(i=0;i<num;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
	
}