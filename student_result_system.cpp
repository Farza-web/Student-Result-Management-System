#include<iostream>
using namespace std;

int main() {

    int marks[100];
    int totalStudents = 0;
    int choice;

    do {

        cout << "\n===== Student Result Management System =====\n";
        cout << "1. Add Student Marks\n";
        cout << "2. Show All Marks\n";
        cout << "3. Find Highest Mark\n";
        cout << "4. Calculate Average Marks\n";
        cout << "5. Check Pass/Fail\n";
        cout << "6. Exit\n";

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        // Add Marks
        if(choice == 1) {

            cout << "\nHow many students? ";
            cin >> totalStudents;

            for(int i = 0; i < totalStudents; i++) {

                cout << "Enter marks for Student "
                     << i + 1 << ": ";

                cin >> marks[i];
            }

            cout << "\nMarks Added Successfully.\n";
        }

        // Show Marks
        else if(choice == 2) {

            if(totalStudents == 0) {

                cout << "\nNo Data Available.\n";
            }
            else {

                cout << "\n===== Student Marks =====\n";

                for(int i = 0; i < totalStudents; i++) {

                    cout << "Student "
                         << i + 1
                         << " = "
                         << marks[i]
                         << endl;
                }
            }
        }

        // Highest Mark
        else if(choice == 3) {

            if(totalStudents == 0) {

                cout << "\nNo Data Available.\n";
            }
            else {

                int highest = marks[0];

                for(int i = 1; i < totalStudents; i++) {

                    if(marks[i] > highest) {

                        highest = marks[i];
                    }
                }

                cout << "\nHighest Mark = "
                     << highest << endl;
            }
        }

        // Average Marks
        else if(choice == 4) {

            if(totalStudents == 0) {

                cout << "\nNo Data Available.\n";
            }
            else {

                int sum = 0;

                for(int i = 0; i < totalStudents; i++) {

                    sum += marks[i];
                }

                float average =
                    (float)sum / totalStudents;

                cout << "\nAverage Marks = "
                     << average << endl;
            }
        }

        // Pass or Fail
        else if(choice == 5) {

            if(totalStudents == 0) {

                cout << "\nNo Data Available.\n";
            }
            else {

                cout << "\n===== Pass/Fail Status =====\n";

                for(int i = 0; i < totalStudents; i++) {

                    cout << "Student "
                         << i + 1
                         << " : ";

                    if(marks[i] >= 40) {

                        cout << "Pass";
                    }
                    else {

                        cout << "Fail";
                    }

                    cout << endl;
                }
            }
        }

        // Exit
        else if(choice == 6) {

            cout << "\nProgram Exited Successfully.\n";
        }

        // Invalid Choice
        else {

            cout << "\nInvalid Choice.\n";
        }

    } while(choice != 6);

    return 0;
}
