//CatList.h
//Joseph Williams 
//J00692590
//The main file is CatListDriver.cpp

#include "Cat.h"
#include "CatList.h"
#include <iostream>
#include <string>
#include <conio.h>	

using namespace std;

void pressAnyKey();

int main() {
    //creating a list with sample elements
    CatList list;
    list.addElementFront(Cat("Jackie", "Daytona", 100));
    list.addElementFront(Cat("Heather", "Swanson", 35));
    list.addElementFront(Cat("Joseph", "Williams", 19));

    // show menu and get choice
    bool cont = true;
    while (cont) {
        cout << endl <<
            "--------------------\n"
            << "Select one option from the menu below\n"
            << "by entering the number with that choice\n"
            <<
            "--------------------\n"
            << "\t1\tAdd Cat to the front of the list\n"
            << "\t2\tAdd Cat to the back of the list\n"
            << "\t3\tSearch for and display a Cat in the list\n"
            << "\t4\tEdit a Cat in the list\n"
            << "\t5\tDelete a Cat from the list \n"
            << "\t6\tDisplay the entire list front to back\n"
            << "\t7\tDisplay the entire list in reverse order\n"
            << "\t8\tDisplay the first item in the list\n"
            << "\t9\tExit the program\n"
            <<
            "--------------------\n"
            << "***Joseph Williams J00692590***" << endl
            << "Enter your choice: "
            << endl;

        //Validate choice
        int choice = 0;
        cin >> choice;
        if (choice < 1 || choice > 9) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Please enter a valid choice!" << endl;
        }

        switch (choice) {
            case 1: {
                //add to the front of the list
                string fname;
                string lname;
                int age;

                cout << "Please enter the first name of the Cat" << endl;
                cin >> fname;
                cout << "Please enter the last name of the Cat" << endl;
                cin >> lname;
                cout << "Please enter the age of the Cat" << endl;
                cin >> age;

                list.addElementFront(Cat(fname, lname, age));
                cout << endl << "        ***Joseph Williams J00692590***" << endl << endl << "--------------------------\n";
                pressAnyKey(); 
                break;
            }
            case 2: {
                //add to the back of the list
                string fname;
                string lname;
                int age;

                cout << "Please enter the first name of the Cat" << endl;
                cin >> fname;
                cout << "Please enter the last name of the Cat" << endl;
                cin >> lname;
                cout << "Please enter the age of the Cat" << endl;
                cin >> age;

                list.addElementEnd(Cat(fname, lname, age));
                cout << endl << "        ***Joseph Williams J00692590***" << endl << endl << "--------------------------\n";
                pressAnyKey();
                break;
            }
            case 3: {
                //search and displays a specific Cat if it's in the list
                string name;
                cout << "Please enter the first name of the Cat you want to search for:" << endl;
                cin >> name;

                list.searchCat(name);
                cout << endl << "        ***Joseph Williams J00692590***" << endl << endl << "--------------------------\n";

                pressAnyKey();
                break;
            }
            case 4: {
                //edits the first name of a Cat selected by the user
                string Cat1, Cat2;
                cout << "Please enter the first name of Cat do you want to edit:" << endl;
                cin >> Cat1;
                cout << endl << "Please enter new first name:" << endl;
                cin >> Cat2;

                list.editCat(Cat1, Cat2);
                cout << endl << "        ***Joseph Williams J00692590***" << endl << "--------------------------\n";

                pressAnyKey();
                break;
            }
            case 5: {
                //removes a Cat from the list by first name
                string fname;
                cout << endl << "Please enter the first name of Cat you want to delete:" << endl;
                cin >> fname;

                list.deleteCat(fname);
                cout << endl << "        ***Joseph Williams J00692590***" << endl << endl << "--------------------------\n";
                
                pressAnyKey();
                break;
            }
            case 6: {
                //displays the list front to back
                list.showForward();
                cout << endl << "        ***Joseph Williams J00692590***" << endl << endl << "--------------------------\n";
                
                pressAnyKey();
                break;
            }
            case 7: {
                //displays the list back to front
                list.showBackward();
                cout << endl << "        ***Joseph Williams J00692590***" << endl << endl << "--------------------------\n";
                
                pressAnyKey();
                break;
            }
            case 8: {
                //displays the head of the list
                cout << "Head of the list: " << endl;
                list.head->data.showCat();
                cout << endl << "        ***Joseph Williams J00692590***" << endl << endl << "--------------------------\n";
                
                pressAnyKey();
                break;
            }
            case 9: {
                //ends the program
                cout << "        ***Joseph Williams J00692590***" << endl << endl;
                cout << endl << endl << "Ending --------------------------\n";
                cont = false;
            }
        }
    }
    return 0;
}

// function from lab 8
void pressAnyKey() {
    char ch = '\0';
    cout << "Press any key to continue" << endl << endl;
    ch = _getch();		// Waits and gets next character entered.	
    system("cls");
    return;
}