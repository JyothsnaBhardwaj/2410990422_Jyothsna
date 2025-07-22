// Bonus for employees
#include <iostream>
using namespace std;
int main(){
    int employee_id;
    string employee_name;
    double basic_sal;
    int years;

    cin>> employee_id;
    cin>> employee_name;
    cin>> basic_sal;
    cin >> years;

    float bonus;
    if(years<2){
        bonus = basic_sal*0.02;
    }
    else if(years>=2 or years<=5){
        bonus = basic_sal*0.05;
    }
    else {
        bonus = basic_sal*0.15;
    }
    
    float total;
    total = basic_sal+bonus;

    cout<<"ID: "<< employee_id<< endl;
    cout<<"Name: "<< employee_name<< endl;
    cout <<"Slary: "<< basic_sal<< endl;
    cout<<"Years: "<< years << endl;
    cout<<"Total: "<< total<< endl;
    return 0;
}