#include <iostream>

using namespace std;

class Rectangle
{
    protected:
       float length, breadth;

   public:
       Rectangle(): length(0.0), breadth(0.0)
        {
            length = 5;
            breadth = 6;
        }
};

/* Area class is derived from base class Rectangle. */
class Area : public Rectangle
{
    public:
        float calc()
        {
            return length * breadth;
        }
};
