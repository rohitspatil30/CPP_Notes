// 333 222 111
// 33 22 11
// 3 2 1
#include<iostream>

#include<bits/stdc++.h>


using namespace std;

int main(){
    int n = 5;
    for(int i=0;i<n;i++){
        for(int j=n;j>=1;j--){
            for(int k=0;k<n-i;k++){
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
    


    return 0;

}