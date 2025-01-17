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

    // #include <iostream>
    // using namespace std;
    // int main(){
    //     char ch;
    //     cout<< "Enter The character : " << endl;
    //     cin>>ch;
    //     if(ch >= 'a' && ch<= 'z'){
    //         cout << "The Character is LowerCase" << endl;
    //     } else {
    //         cout << "The Character is UpperCase" << endl;
    //     }
    //     return 0;
    // }

// Q3 . Sum of number from 1 to 

// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0, i;
//     int n;
//     cout << "Enter the Value of Number till which You Want Sum : ";
//     cin >> n;
//     for(i =1 ;i<=n ; i++){
//         sum =sum+i;

//     }
//     cout <<"sum: " << sum ;
// } 


            // #include<iostream>
            // using namespace std;
            // int main(){
            //     int sum=0, i;
            //     int n;
            //     cout << "Enter the Value of Number till which You Want Sum : ";
            //     cin >> n;
            //     for(i =1 ;i<=n ; i++){
            //         sum =sum+i;
            //         if(i==4){  // Due to this 'i' will run only 4 times
            //             break;
            //         }
            //     }
            //     cout <<"sum: " << sum ;
            // } 

// Q4. To sum of all odd numbers from 1 to n

#include<iostream>
using namespace std;

int main(){
    int n = 50;
    cout << "Odd Numbers are : ";
    for (int i = 1 ; i<=n; i++){
        
        if(i%2 !=0){
            
            cout << i <<" ";
        }

    }

return 0;
}


