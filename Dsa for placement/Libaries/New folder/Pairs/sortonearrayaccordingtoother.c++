#include<iostream>
#include<algorithm>
using namespace std;
void sortchar(int a[], char b[],int n){
   pair<int,char>pa[n];
   for(int i=0;i<n;i++){
       pa[i]={a[i],b[i]};
   }
   sort(pa,pa+n);
   for(int i=-0;i<n;i++){
       cout<<pa[i]<<" ";
   }

}

int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;

    int arr1[n], arr2[n];
    cout<<" Enter the value of arr1";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    } 
    cout<<"Enter the value of arr2";
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    sortchar(arr1,arr2,n);
   return 0; 
}
