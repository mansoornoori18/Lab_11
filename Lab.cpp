#include<iostream>   // COMSC-210 | Lab 11 | Mansoor Noori
#include<string>     // string libary
using namespace std; // IDE Visual Studio,




// main function 
int main (){

    // struct Vacation Day hold multiple data type 
    struct VacationDay {
        string activity;
        string items;
        int numItems;
        
        // constructor 
        VacationDay(){
            items = nullptr;
            numItems = 0;

        }
        //destructor to clean the dynamic array
        ~VacationDay(){
            delate[] items;
        }
        
    }


    return 0;

}