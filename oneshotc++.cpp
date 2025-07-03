#include<iostream>
using namespace std;

int main(){
    // int x, y;
    // cin >> x >> y;
    // cout <<"Value of x: " << x<< " and y: "<< y;
    // return 0;

    // string s1, s2;
    // cin>>s1>>s2;
    // cout<<s1<<" " <<s2; ;
    // string str;
    // getline(cin,str);
    // cout<<str;

    // If statement and If else statement

    // int age;
    // cin >> age;
    // if(age>=18){
    //     cout<<"you are an adult";
    // } else{
    //     cout<<"you are not an adult";
    // }

    /*QUestion problem statement*/
    // int age;
    // cin>>age;
    // if(age>=18){
    //     cout<<"you are an adult";
    // } else if(age>=13 && age<18){
    //     cout<<"you are a teenager";
    // } else{
    //     cout<<"you are a child";
    // }

    // switch statements

    int day;
    cin >> day;

    switch(day){
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday"; 
            break;
        case 3:
            cout<<"Wednesday";
            break;
        case 4:
            cout<<"Thursday";
            break;
        case 5:
            cout<<"Friday";
            break;
        case 6:
            cout<<"Saturday";
            break;
        case 7:
            cout<<"Sunday";
            break;
        default:
        cout<<"Invalid day";
        break;
    }
    return 0;
}
