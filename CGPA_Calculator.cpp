#include <iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;

    float grade[50],credit[50];
    float totalCredits = 0;
    float totalGradePoints = 0;
    float cgpa;
    
    cout << "Enter Number of Courses: ";
    cin >> n;
    for(int i = 0; i < n;i++)
    {
        cout << "\nEnter grade for course: " << i+1 << ": ";
        cin >> grade[i];

        cout << "Enter Credit Hours: ";
        cin >> credit[i];

        totalCredits += credit[i];

        totalGradePoints += grade[i]*credit[i];
    }
    cgpa = totalGradePoints / totalCredits;
    
    cout << "\n----- Course Details -----\n ";
    for(int i = 0; i < n; i++)
    {
        cout <<"Course " << i+1 << "| Grade: " << grade[i]<<"|Credits: " << credit[i] <<endl;
    }
    cout << fixed << setprecision(2);

    cout << "\nTotal Credits: "<< totalCredits;
    cout << "\nTotal grade Points: "<< totalGradePoints;

    cout << "Final CGPA" << cgpa << endl;
    return 0;
}