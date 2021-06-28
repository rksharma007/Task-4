/*CPP PROGRAM TO READ TIME IN HH:MM:SS FORMAT AND CONVERT INTO TOTAL SECONDS USING CLASS*/

#include <iostream>
#include <iomanip>

using namespace std;

class Time
{
    private:
        int sec,hh,mm,ss;

    public:
        void getTime(void);
        void toSeconds(void);
        void showTime(void);
};


void Time::getTime(void)
{
    cout << "Enter time:" << endl;
    cout << "Hours?   ";
    cin >> hh;
    cout << "Minutes? ";
    cin >> mm;
    cout << "Seconds? ";
    cin >> ss;
}

void Time::toSeconds(void)

{
    sec = hh*3600 + mm*60 + ss;
}


void Time::showTime(void)
{
    cout << "The time is = " << setw(2) << setfill('0') << hh << ":"<< setw(2) << setfill('0') << mm << ":"<< setw(2) << setfill('0') << ss << endl;
    cout << "\nTime in total seconds: " << sec;
}


int main()
{
    Time T;
    T.getTime();
    T.toSeconds();
    T.showTime();

    return 0;
}
