#include <iostream>
#include <string>
using namespace std;

class Game
{
private:
    int hp;
    string name;
public:
    static int count;
public:
    Game(int hp = 0, string name = " ") 
    {
        this->hp = hp;
        this->name = name;
        count++;
    }
    ~Game() { count--;}
    void print()
    {
        cout << "player : " << name << "의 hp : " << hp << endl;
    }
};

int Game::count = 0;

int main()
{   
    cout << Game::count << endl;
    Game player1(100, "Kim");
    cout << Game::count << endl;
    Game Player2(90, "Jung");
    cout << Game::count << endl;

    return 0;

}