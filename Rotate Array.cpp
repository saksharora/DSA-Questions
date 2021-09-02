// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
using namespace std;


int main() {
    int n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
         int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        int temp=a[j];
        a[j]=a[min];
        a[min]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    // Write C++ code here
    

    return 0;
}

