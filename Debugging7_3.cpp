#include<bits/stdc++.h>

class Room
{
    private:
        float mWidth;
        float mLength;
    
    public:
        Room()
        {
        }

        Room(float w, float h): mWidth(w), mLength(h)
        {
        }

        operator float()
        {
            return (float)mWidth * mLength;
        }

        float getWidth()
        {
            return mWidth;
        }

        float getLength()
        {
            return mLength;
        }

};

int main()
{
    Room obj(2.5, 2.5);
    float fTotalArea;
    fTotalArea = obj;
    std::cout<<fTotalArea;
}