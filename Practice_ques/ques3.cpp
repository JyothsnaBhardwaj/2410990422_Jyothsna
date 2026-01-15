// Checking for password strength
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
    string password;
    cout<<"Enter password: "<<endl;
    getline(cin,password);
    int upper=0, lower=0, special=0, num=0, cnt=0;
    for(char ch: password){
        cnt++;
        if(isupper(ch)){
            upper++;
        }
        else if(islower(ch)){
            lower++;
        }
        else if(isdigit(ch)){
            num++;
        }
        else{
            special++;
        }
    }
    int categories=0;
    if(upper>0){
        categories++;
    }
    if(lower>0){
        categories++;
    }
    if(special>0){
        categories++;
    }
    if(num>0){
        categories++;
    }
    
    cout<< "Length of password: "<<cnt<<endl;
    cout<< "No. of uppercase: "<< upper<<endl;
    cout<< "No. of lowercase: "<<lower<<endl;
    cout<< "No. of special characters: "<<special<<endl;
    cout<< "No. of digits: "<<num<<endl;
    if(cnt<6 && categories<=2){
        cout<<"WEAK PASSWORD";
    }
    else if(cnt>=6 && cnt<=8 && categories>=3){
        cout<<"MEDIUM PASSWORD";
    }
    else if(cnt>=9 && categories==4){
        cout<<"STRONG PASSWORD";
    }
    return 0;
}
