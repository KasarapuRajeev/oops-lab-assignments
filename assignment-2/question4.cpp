#include <iostream>
using namespace std;

class Rectangle
{
    int width, height;

public:
    void getdata()
    {
        cout << "Enter width and height: ";
        cin >> width >> height;
    }

    void calculatearea()
    {
        cout << "Area = " << width * height << endl;
    }
};

int main()
{
    Rectangle r;
    r.getdata();
    r.calculatearea();
    return 0;
}
