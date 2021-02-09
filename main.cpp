#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a, b;
    cin>>a;
    cin>>b;
    //list of word of numbers
    string one[] = { "", "one ", "two ", "three ", "four ", 
                 "five ", "six ", "seven ", "eight ", 
                 "nine "}; 
    //for loop to check the number
    for(int i =a; i<=b; i++){
        //if else if statement to check number
        if(i>=1 && i<=9){
            string str = "";
            //""+number, ""+one is "one"
            str +=one[i];
            cout<<str+"\n";
        }else if(i>9){
            //if it is divisible by 2, it is even
            if(i%2==0){
                cout<<"even \n";
            }else{
                cout<<"odd \n";
            }
        }
    }
    return 0;
}
