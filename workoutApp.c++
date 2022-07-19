
#include <iostream>
#include <String>
#include <fstream>
#include "workoutApp.h"
using namespace std;
void prompt()
{
    cout << "Hello Welcome to the workout program." << endl;
    cout << "Please add what you worked on today" << endl;
    cout <<" Chest: 1" << endl;
    cout <<" Back: 2" << endl;
    cout <<" Legs: 3" << endl;
    cout <<" Tricept: 4" << endl;
    cout <<" Bicepts: 5" << endl;
    cout <<" Cardio: 6" << endl;
    cout <<" abs: 7" << endl;
}
void chart(int &chest, int &back, int &legs, int &tri, int &bi, int &car, int &abs){
    cout << "Updated table" << endl;
     cout <<" Chest:    " << chest << endl;
    cout <<" Back:     " << back << endl;
    cout <<" Legs:     " << legs << endl;
    cout <<" Tricept:  " << tri << endl;
    cout <<" Bicepts:  " << bi << endl;
    cout <<" Cardio:   " << car << endl;
    cout <<" abs:      " << abs << endl;
}
void addingPoints(int &choice, int array[])
{
    
    int chest = 0;
    int back = 0;
    int legs = 0;
    int tri = 0;
    int bi = 0;
    int car = 0;
    int abs = 0;
    cout << choice << " this is choice" << endl;
    while (choice != 8){
    cout << "Pess 8 to quit" << endl;
    cin >> choice;
    if (choice == 1)
    {
        chest++;
        array[1]++;
    }
    if (choice == 2)
    {
        back++;
        array[2]++;
    }
    if (choice == 3)
    {
        legs++;
        array[3]++;
    }
    if (choice == 4)
    {
        tri++;
        array[4]++;
    }
    if (choice == 5)
    {
        bi++;
        array[5]++;
    }
    if (choice == 6)
    {
        car++;
        array[6]++;
    }
    if (choice == 7)
    {
        abs++;
        array[7]++;
    }
    chart(chest,back,legs,tri, bi, car, abs);

    }

    if (choice == 8)
    {
        cout << "Data is saved" <<endl;

    }
    


}

void postChart(string record, int array[])
{
     fstream myFile;
    //write on file
    myFile.open("data.txt",ios::app);
    myFile << endl;
    cout << record << endl;
    myFile << record << endl;
    myFile << "-----------------" << endl;
    for(int i = 0; i < 7; i++)
        {
            if (array[i] > 0)
            {
                if (i == 1)
        {
        cout << "Chest: " << array[i] <<endl;
        myFile << "Chest "<< endl;
    }
    if (i == 2)
    {
        cout << "Back: " << array[i] << endl;
        myFile << "Back "<< endl;
        
    }
    if (i == 3)
    {
        cout << "Legs: " << array[i] << endl;
        myFile << "Legs"<< endl;
    }
     if (i == 4)
    {
        cout << "Tricepts: " << array[i] << endl;
        myFile << "Tricepts"<< endl;
    }
     if (i == 5)
    {
        cout << "Bicepts: " << array[i] << endl;
        myFile << "Bicepts" << endl;
    }
     if (i == 6)
    {
        cout << "Cardio: " << array[i] << endl;
        myFile << "Cardio "<< endl;
    }
     if (i == 7)
    {
        cout << "Abs: " << array[i] << endl;
        myFile << "Abs"<< endl;
    }
            }

        }
      myFile.close();  


}
int main()
{
    

    int array[7] = {0,0,0,0,0,0,0};
    // Print standard output
    // on the screen
    Days day1;

    int choice = 0;
    
    prompt();
    addingPoints(choice,array);
    day1.getDay();
    string record = day1.sDay;
     postChart(record,array);
 
    return 0;
}


