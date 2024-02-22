/* 
Name : Muhammad Nur Zulfiqar Bin Mohd Zulkifli
Id Number : Am2311015179
Program : Lab Work 1 (Calculate area of Circle or Triangle)
*/

#include <iostream>
#include <cmath> // Add this line for pow
using namespace std;

int main() {
    int choice;
    double radius, length, width, area;

    cout << "Choose a shape to calculate its area:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) { //Calculate the Area of Circle
    	
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        
        const double PI = 3.14159; // Add PI declaration
        area = PI * pow(radius, 2);
        cout << "Area of the Circle is: " << area << endl;
        
    } else if (choice == 2) { //Calculate the Area of Rectangle
    	
        cout << "Enter the length and width of the Rectangle: ";
        cout << "Enter the length of the Rectangle: ";
        cin >> length; //Change to >> for cin
        cout << "Enter the width of the Rectangle: ";
        cin >> width;  //Change to >> for cin

        if ((length > 0) && (width > 0)) { // Change to && for both conditions to avoid -ve and 0 value
        
            area = length * width;
            cout << "Area of the Rectangle is: " << area << endl;
            
        } else { //added else
        	
            cout << "Invalid input. Length and Width cannot be negative." << endl;
            
        }
    } else {
    	
        cout << "Invalid choice. Please enter 1 or 2." << endl;
        
    }// end of if

    return 0;
}//end of main function