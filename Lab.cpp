#include<iostream>   // COMSC-210 | Lab 11 | Mansoor Noori
#include<string>     // string libary
using namespace std; // IDE Visual Studio,


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
            string* newItems = new string[numItems + 1];

            //copy old items in to new arrays 
            for (int i = 0; i < numItems; i++){
                newItems[i] = items[i];

            }
            // add the new items to the end 
            newItems[numItems] = item;

            // delete old aray and replace with new 
            delete[] items;
            items = newItems;
            numItems++;

            }
            // Function to print the vacation day and its packing list
        void printPlan() const {
            cout << "Activity: " << activity << endl;
            cout << "Packing List (" << numItems << " items):" << endl;
            
            for (int i = 0; i < numItems; ++i){
                cout << "  - " << items[i] << endl;
            }
            cout << "--------------------------" << endl;
        }
    };

        int main(){

            VacationDay* days = nullptr;   // dynamic array of VacationDay structs
            int numDays = 0;               // total number of vacation days

            int total;
            cout << "How many vacation days are you planning? ";
            cin >> total;
            cin.ignore(); // clear input buffer

            for (int i = 0; i < total; ++i){
                // Create a new array one element larger
                VacationDay* newDays = new VacationDay[numDays + 1];

                // Copy over old data
                for (int j = 0; j < numDays; ++j){
                    newDays[j] = days[j];
                }

                 // Input new day's activity
                 cout << "\nEnter activity or theme for day #" << (i + 1) << ": ";
                 getline(cin, newDays[numDays].activity);

                 // Input items to pack for that day
                 int itemCount;
                 cout << "How many items to pack for \"" << newDays[numDays].activity << "\"? ";
                 cin >> itemCount;
                 cin.ignore();

                 for (int k = 0; k < itemCount; ++k){
                    string item;
                    cout << "  Enter item #" << (k + 1) << ": ";
                    getline(cin, item);
                    newDays[numDays].addItem(item);
                 }
                 // Delete old array and point to new one
                 delete[] days;
                 days = newDays;
                 numDays++;

                }

                // Final output: show all vacation days and items packed
                cout << "\n===== Vacation Packing Plan =====" << endl;
                for (int i = 0; i < numDays; ++i){
                    days[i].printPlan();
                
                }

                // Clean up memory
                delete[] days;
                
                
                return 0;      

        }
