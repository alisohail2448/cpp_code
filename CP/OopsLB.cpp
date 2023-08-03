#include <bits/stdc++.h>
// #include "Hero.cpp "
using namespace std;

class Hero
{

private:
    int health;

public:
    char level;
    static int timeToComplete;

    Hero(){
        cout<<"Constructor called"<<endl;
    }



    //copy constructor
    Hero(Hero& temp){
        cout<<"copy constructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    //Parameterized constructor
    Hero(int health){
        cout<<"this -> "<<this<<endl;
        this->health = health;
    }

    Hero(int health, char level){
        this->level = level;
        this->health= health;
    }

    void print()
    {
        cout<<"health "<<this->health<<endl;
        cout << "level " <<this->level<< endl;
    }

    static int random(){
        return timeToComplete;
    }

    int getHealth()
    {
        return health;
    }

    int getLevel()
    {
        return level;
    }

    int setHealth(int h)
    {
        health = h;
    }

    int setLevel(int l)
    {
        level = l;
    }


    ~Hero(){
        cout<<"Destructor called"<<endl;
    }
};

int Hero::timeToComplete = 5;

int main()
{

    cout<<Hero::random()<<endl;

    // //static variable
    // cout<<Hero::timeToComplete<<endl;
    // Hero a;
    // cout<<a.timeToComplete<<endl;



    // //static object
    // Hero a;

    // //dynamically object
    // Hero *b = new Hero;
    // //manually destructor called
    // delete b;


    // Hero S(70, 'C');
    // S.print();

    // Hero R(S);
    // R.print();


    //object created statically
    // Hero obj(10);
    // cout<<"Address of object "<<&obj<<endl;



    // //object created dynamically
    // Hero *object = new Hero(20);



    // // static allocation of object
    // Hero ali;
    // ali.setLevel('A');
    // ali.setHealth(80);
    // cout << "Level is : " << ali.level << endl;
    // cout << "Ali health is " << ali.getHealth() << endl;

    // //dynamic allocation of object
    // Hero *b = new Hero;
    // b->setLevel('B');
    // b->setHealth(70);
    // cout << "Level is : " << (*b).level << endl;
    // cout << "Ali health is " << (*b).getHealth() << endl;
    // cout << "Level is : " << b->level << endl;
    // cout << "Ali health is " << b->getHealth() << endl;

    // ali.setHealth(70);
    // ali.health = 70;
    // ali.level = 'a';

    // cout << "Health is : " << ali.getHealth() << endl;
    // cout << "Level is : " << ali.level << endl;
    return 0;
}