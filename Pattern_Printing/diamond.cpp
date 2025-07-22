#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter no.:"<< endl;
    cin>> n;
    int k;
    for(int i=1; i<n; i++, k=0){
        for(int j=1; j<=i; j++){
            cout<<" ";
        }
    }
}