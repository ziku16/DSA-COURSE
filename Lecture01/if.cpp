#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if( age >=18 ){
        cout << "You are 18+";
    } else {
        cout << "You are underage";
    }

    return 0;

}