#include <iostream>
#include <iomanip>
using namespace std;

const int W10 = 10;

class Color{
private:
    int red, green, blue;
public:
    //getter and setter methods
    void setRed(int numRed)       {red = numRed;}
    void setGreen(int numGreen)   {green = numGreen;}
    void setBlue(int numBlue)     {blue = numBlue;}
    int getRed()                  {return red;}
    int getGreen()                {return green;}
    int getBlue()                 {return blue;}

    //member print function
    void print(){
        cout << setw(W10) << "Red Value: " << red << endl;
        cout << setw(W10) << "Green Value: " << green << endl;
        cout << setw(W10) << "Blue Value: " << blue << endl;
    }
};



int main(){
    //creating Color objects and populating
    Color color1;
    Color color2;

    color1.setRed(23);
    color1.setGreen(324);
    color1.setBlue(67);

    color2.setRed(873);
    color2.setGreen(677);
    color2.setBlue(767);

    //outputting
    cout << "Color 1:\n";
    color1.print();
    cout << "\nColor 2:\n";
    color2.print();
    return 0;
}