// Q.No - 1 .(Print the following pattern).

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter No Of Rows : ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    }