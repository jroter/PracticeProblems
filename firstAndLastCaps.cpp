#include <iostream>
#include <cctype> 
using namespace std; 

int main(){
    string userInput;
    cout << "Enter a string: " << endl;
    getline(cin,userInput);

    for(size_t i {0}; i < userInput.length(); i++){
        if(i == 0 || i == (userInput.length() - 1)){
            userInput[i] = toupper(userInput[i]);
        }
        if(isspace(userInput.at(i))){
            userInput[i-1] = toupper(userInput[i-1]);
        }
        if(isspace(userInput.at(i))){
            userInput[i+1] = toupper(userInput[i+1]);
        }
    }
    cout << "Your string is: " << userInput << endl;
}