#include<bits/stdc++.h>

class Space
{
    private:
        int mCount;
    public:
        Space()
        {
            mCount = 0;
        }

        Space(int mCount)
        {
            this->mCount = mCount;
        }
        Space operator++(int)
        {
            mCount++;
            return Space(mCount);
        }

        int getMcount()
        {
            return mCount;
        }
};

int main()
{
    Space obj;
    obj++;
    //++obj;
    std::cout<<obj.getMcount();
}