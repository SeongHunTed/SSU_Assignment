#include <iostream>
#include <string>
using namespace std;

class UnderGradStudent
{
public:
    string name;
    string department;
    void warn()
    {
        cout << "학부생 경고" << endl;
    }
};

class DormStudent
{
public:
    string building;
    int roomNumber;

    void warn()
    {
        cout << "기숙사생 경고 " << endl;
    }
};

class UnderGrad_DormStudent :
    public UnderGradStudent, 
    public DormStudent
{
    public:
};

int main()
{
    UnderGrad_DormStudent std;
    std.name = "Hyun C. Lee";
    std.department = "Global Media";
    std.building = "101동";
    std.roomNumber = 1006;
    std.DormStudent::warn();
    std.UnderGradStudent::warn();

    return 0;
}