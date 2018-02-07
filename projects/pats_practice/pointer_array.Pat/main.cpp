#include<iostream> 
using namespace std;

int main(){ 

    int array[5],i;
    int *point=array;

    cout<<"Enter five numbers separated by space:";
    cin>>*point>>*(point+1)>>*(point+2)>>*(point+3)>>*(point+4);
    cout<<"Your numbers are:\n";

    for(i=0;i<5;i++){
        cout<<array[i]<<endl;
    }

    cout<<"Enter five numbers separated by space:";
    cin>>*point>>*(point+1)>>*(point+2)>>*(point+3)>>*(point+4);
    cout<<"Your numbers are:\n";

    for(i=4;i>=0;i--){
        cout<<*(point+i)<<endl;
    }

    // int arr[5],j; 
    // int *p=arr; 
    // cout<<"Enter five numbers separated by space:"; 
    // cin>>*p>>*(p+1)>>*(p+2)>>*(p+3)>>*(p+4); 
    // cout<<"Your numbers are:\n"; 
    // for(j=0;j<5;j++) 
    //     cout<<arr[j]<<endl;
    
    // return 0; 
  
}
