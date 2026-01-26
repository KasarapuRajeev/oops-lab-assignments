#include <iostream>
using namespace std;

int x = 10;   
class Test
{
public:
    static int y;
    void show();
};

int Test::y = 20;  

void Test::show()   
{
    int x = 5;      
    cout << "Local x = " << x << endl;
    cout << "Global x = " << ::x << endl;
    cout << "Static y = " << Test::y << endl;
}

int main()
{
    Test t;
    t.show();
    std::cout << "Using built-in with scope resolution\n";
    return 0;
}
