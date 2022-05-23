#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    int i,j,gap,temp,arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(gap=n/2;gap>0;gap=gap/2){
        for(i=gap;i<n;i++){
            temp = arr[i];
            for(j=i;j>=gap;j=j-gap){
                if(temp < arr[j-gap]){
                    arr[j] = arr[j-gap];
                }else{
                    break;
                }
            }
            arr[j] = temp;
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
