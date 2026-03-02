#include <iostream>
using namespace std;

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
        cout << "Red Value: " << red << endl;
        cout << "Green Value: " << green << endl;
        cout << "Blue Value: " << blue << endl;
    }
};



int main(){

    return 0;
}