                // Conditional Statement 

// if(Condition){
//     block of code;  // If the condition is true then this block of code will run
// }
// else{
//     otherwise this block will run
// }

                // #include<iostream>
                // using namespace std ;

                // int main(){
                // int n = 45;
                // if(n>=0){
                //     cout << "Positive Number" << endl;
                // }
                // else{
                //     cout << "Not positive" << endl;
                // }
                // return 0;
                // }

// To check the person is eligible for vote or not

                // #include<iostream>
                // using namespace std;

                // int main(){
                //     int age ;
                //     cout << "Enter Your Age : " << endl;
                //     cin >> age ;

                //     if (age >= 18){
                //         cout << "You Can Vote" << endl;

                //     } else {
                //         cout << "You Can not vote" << endl;
                //     }                   
                // return 0;
                // }


// To check the number given by the user is Odd Or Even 
                // #include<iostream>
                // using namespace std ;

                // int main(){
                //     int number;
                //     cout << "Enter The Number To Check : " << endl;
                //     cin >> number ;
                //     if (number%2 == 0){
                //         cout <<number << " is Even " << endl;
                //     } else {
                //          cout <<number << " is odd " << endl;
                //     }
                //     return 0;
                // }


// Grading Stystem based on marks 
                 #include<iostream>
                 using namespace std ;
                int main(){
                    int marks ;
                    cout << "Please Enter Your Marks : " << endl;
                    cin >> marks;
                    if (marks>90){
                        cout << "Grade A" <<endl;
                    }  else if (marks>=80 && marks <90){
                        cout << "Grade B"<<endl;
                    } else if (marks>=70 && marks <80){
                        cout << "Grade C"<<endl;
                    } else {
                        cout <<"Grade D" <<endl;
                    }
                    return 0;

                }