#include<iostream>
using namespace std;
int main(){

    char word;
    cout<<"Plz write the alphabet: ";
    cin>>word;

    switch(word){
        case 'a':
        cout<<"It is a vowel"<<endl;
        break;

        case 'e':
        cout<<"It is a vowel"<<endl;
        break;

        case 'i':
        cout<<"It is a vowel"<<endl;
        break;

        case 'o':
        cout<<"It is a vowel"<<endl;
        break;

        case 'u':
        cout<<"It is a vowel"<<endl;
        break;

        default:
        cout<<"It is a consonant"<<endl;
        break;

    }
    
    return 0;
}