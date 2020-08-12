#include <iostream>
using namespace std;

string intToRomans(int);

int main(){
    int num;
    int count;
    string romans;
    cout << "Enter a number: ";
    cin >> num;
    //Handles numbers over the upper and lower bounds
    while(num >= 4000 || num <= 0){
        cout << "Enter a number: ";
        cin >> num;
    }
    //prints the amount of 1000's as M
    if(num >= 1000){
        count = num/1000;
        for(int i {0}; i < count; i++){
            romans += 'M';
        }
    }  
    //stepping into the hundredths place
    num %= 1000;
    if(num >= 100){
        count = num/100;
        //handles upperbound 
        if(count == 9){
            romans += "CM";
            //handles inbetween
        }else if(count >= 5){
            romans += 'D';
            for(int i {0}; i < count - 5; i++){
                romans += 'C';
            }
            //handles lowerbound
        }else if(count == 4){
            romans += "CD";
            //prints the hundred roman numeral
        }else if(count >= 1){
            for(int i {0}; i < count; i++){
                romans += 'C';
            }
        }
        //Stepping into the tenth place
        num %= 100;
    }if(num >= 10){
        count = num/10;
        //handles upperbound
        if(count == 9){
            romans += "XC";
        }else if(count >= 5){
            romans += 'L';
            for(int i {0}; i < count - 5; i++){
                romans += 'X';
            }
            //handles lowerbound
        }else if(count == 4){
            romans += "XL";
            //prints out tenth place
        }else if(count >= 1){
            for(int i {0}; i < count; i++){
                romans += 'X';
            } 
        }
        //stepping into everything below 10
        num %= 10; 
    }if(num >= 1){
        count = num;
        //handle upperbound
        if(count == 9){
            romans += "IX";
        }else if(count >= 5){
            romans += "V";
            for(int i {0}; i < count - 5; i++){
                romans += "I";
            }
        }else if(count == 4){
            romans += "IV";
        }else if(count >= 1){
            for(int i {0}; i < count; i++){
                romans += "I";
            }
        }
    }
    cout << "Roman Numeral: " << romans << endl;
}
