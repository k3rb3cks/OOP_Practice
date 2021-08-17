#include<bits/stdc++.h>

enum WeekDays
{
    mSunday,
    mMonday,
    mTuesday,
    mWednesday,
    mThursday,
    mFriday,
    mSaturday
};

/*bool operator==(WeekDays& w1, WeekDays& w2)
{
    if(w1 == mSunday && w2 == mSunday)
        return 1;
    else if(w1 == mSunday && w2 == mSunday)
        return 1;
    else if(w1 == mMonday && w2 == mMonday)
        return 1;
    else if(w1 == mTuesday && w2 == mTuesday)
        return 1;
    else if(w1 == mWednesday && w2 == mWednesday)
        return 1;
    else if(w1 == mThursday && w2 == mThursday)
        return 1;
    else if(w1 == mSaturday && w2 == mSaturday)
        return 1;
    else
        return 0;

}
*/
int main()
{
    WeekDays w1 = mSunday, w2 = mSaturday;
    if(w1 == w2)
        std::cout<<"Same Day";
    else
        std::cout<<"Different Day";
}

//enum == enum is in-built overloaded operator
//more than one operator "==" matches these operands: -- built-in operator "enum == enum"