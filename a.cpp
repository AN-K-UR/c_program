#include<iostream>
using namespace std;
int max(int arr[],int n){
    int i;
    int max=arr[0];
    for(i=1;i<n;i++)
        if(arr[i]>max)
            max=arr[i];
            return max;

        


}
int main(){
    int arr[]={1,2,3,4,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"the largest element is "<<max(arr,n)<<endl;

    return 0;

}