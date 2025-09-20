#include<iostream>   // COMSC-210 | Lab 11 | Mansoor Noori
#include<string>     // string libary
using namespace std; // IDE Visual Studio,




// main function 
int main (){

    // struct Vacation Day hold multiple data type 
    struct VacationDay {
        string activity;
        string* items;
        int numItems;
        
        // constructor 
        VacationDay(){
            items = nullptr;
            numItems = 0;

        }
        //destructor to clean the dynamic array
        ~VacationDay(){
            delete[] items;
        }
        // function to add item to the list 
        void addItem( const string& item){

            //create new array one element larger
            string* newItem = new string[numItems + 1];

            //copy old items in to new arrays 
            for (int i = 0; i < 0; i++)


        }
        
    }


    return 0;

}