// Q1 . Sum Of Two numbers 

    // #include<iostream>
    // using namespace std;
    // int main(){
    //     int a,b;
    //     cout << "Enter your first number : "<< endl;
    //     cin >> a; 
    //     cout << "Enter your Second number : "<< endl;
    //     cin >> b; 
    //     cout <<"The Sum Of the Two numbers is " << a+b << endl ;
    //     return 0;
    // }

// Q2. TO check the Input character is uppercase or lowercase

    #include <iostream>
    using namespace std;
    int main(){
        char ch;
        cout<< "Enter The character : " << endl;
        cin>>ch;
        if(ch >= 'a' && ch<= 'z'){
            cout << "The Character is LowerCase" << endl;
        } else {
            cout << "The Character is UpperCase" << endl;
        }
        return 0;
    }