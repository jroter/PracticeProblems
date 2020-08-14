#include <iostream>
using namespace std;

bool isPalindrome (string);

bool isPalindrome(string str){
    bool isPalindrome = false;
    int i {0};
    int j = str.length() - 1;

    while(i < j){
        if(str.at(i) != str.at(j)){
            cout << "False! " <<  str << " isn't a palindrome" << endl;
            return isPalindrome;
        }
        i++;
        j--;
    }
    isPalindrome = true;
    cout << "True! " << str << " is a palindrome" << endl;
    return isPalindrome;
}

int main(){
    string str;
    cout << "Enter a word to determine if it's a palindrome: " << endl;
    getline(cin, str);

    isPalindrome(str);
}
