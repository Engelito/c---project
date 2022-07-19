#include <String>
#include <iostream>
using namespace std;
class Days
{
    private:
    int iDay;

    public:
    string sDay;
    void grabDay();
    void getDay(){
    cout << "Enter day of the week: " << endl;
    cin >> iDay;
        if (iDay == 1)
    {
        sDay = "Monday";
    }
    else if (iDay == 2)
    {
        sDay = "Tuesday";
    }

    
    else if (iDay == 3)
    {
        sDay = "Wednesday";
    }

    if (iDay == 4)
    {
        sDay = "Thursday";
    }

    if (iDay == 5)
    {
        sDay = "Friday";
    }

    if (iDay == 6)
    {
        sDay = "Saturday";
    }

    if (iDay == 7)
    {
        sDay = "Sunday";
    }


    }

    

};
