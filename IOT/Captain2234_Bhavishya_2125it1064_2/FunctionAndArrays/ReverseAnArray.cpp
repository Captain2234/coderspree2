#include<iostream>
using namespace std;

void reverse(int* arr, int n){
    int rem=n-1;
    int temp;
    if(n%2!=0){
  for(int i=0;i<(n+1)/2;i++){
      
    temp=arr[i];
    arr[i]=arr[rem];
    arr[rem]=temp;
    rem--;
  }
    }   
    
    else
    {
          for(int i=0;i<n/2;i++){
      
    temp=arr[i];
    arr[i]=arr[rem];
    arr[rem]=temp;
    rem--;
  }
    }
    
    
    
}

void display(int* arr, int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    reverse(arr,n);
    display(arr,n);
}