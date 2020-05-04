#include <iostream>

using namespace std;

class Father
{
    protected:
        int age;

    public:
        void setage()
        {
            age = 75;
        }

        int getage()
        {
            return age;
        }
};

class Son : public Father // Son class inherited from Father
{
    protected:
        int S_age;

    public:
        void setage_S()
        {
            S_age = 45;
        }

        int getage_S()
        {
            return S_age;
        }
};

class GrandSon : public Son  // Grandson class inherited from Son
{
    protected:
        int GS_age;

    public:
        void setage_GS()
        {
            GS_age = 15;
        }

        int getage_GS()
        {
            return GS_age;
        }
};

