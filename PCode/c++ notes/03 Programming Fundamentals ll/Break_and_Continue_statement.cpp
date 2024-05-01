#include<iostream>
using namespace std;
int main(){

    int money=3000;

    for(int date=1; date<=30; date++){
        if(date%2==0){
            continue;
        }
        money=money-500;
        if(money<=0){
            break;
        }
        cout<<"She can go out on "<<date<<endl;
    }

    return 0;
}