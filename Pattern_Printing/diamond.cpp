#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter no.:"<< endl;
    cin>> n;
    int k;
    for(int i=1; i<=n; i++, k=0){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        while(k!=2*i-1){
            cout<<"*";
            k++;
        }
        cout<<endl;
    }
    for(int i=n-1; i>=1; i--, k=0){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        while(k!=2*i-1){
            cout<<"*";
            k++;
        }
        cout<<endl;
    }
    return 0;
}