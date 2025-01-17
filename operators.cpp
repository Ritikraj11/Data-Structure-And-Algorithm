#include<iostream>
using namespace std;
int main(){
    // int a = 15 , b =6;

    // int sum = a+b ;
    // int difference = a-b ;
    // int multiply = a*b ;
    // int divide = a/b ;
    // int modulo = a%b;

    // cout<< "The Sum is : " << sum <<endl;
    // cout<< "The difference is : " << difference <<endl;
    // cout<< "The multiply is : " << multiply <<endl;
    // cout<< "The divide is : " << divide <<endl;
    // cout<< "The remainder is : " << modulo <<endl;


    // cout << (5 / 2) << endl ;    // Output is 2 because both the values are integer type
    // cout << (5/(double(2))) << endl ; // Now one of the value is not integer so the value is 2.5 and the process is known as typecasting

//  relational operator

    // ==
    // >
    // <
    // <=
    // >=
    // !

// logical operator

    // || (or operator) --> true if any one condition is true/
    // && (and Operator)--> true only if both the statement is true
    // ! (Not Operator )--> Change true into false and vice - verca


//********      Uninary Operators

    // Increment Operator (++) ==> used to increase a number by 1

    //         pre increment (++i) ==> pehle update fir kaam
    //         post increment (i++)==> pehle kaam fir update 

    // Decrement Operator (--) ==> used t0 decrease a number by 1

    //         pre dercrement (--i) ==> pehle update fir kaam
    //         post increment (i--)==> pehle kaam fir update 


// ******     Ternary Operator
    // syntex : condition ? str1 : str2; 
 
    int n =45;
    cout << (n>=0?"positive number" : "negetive number");
    return 0;
}