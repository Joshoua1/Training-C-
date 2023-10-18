#include<iostream>
using namespace std;

class Hero{
    
    public:
    int health;
    char level;

    public:
    void setlevel(char ch){
        level = ch;
    }
  
    void getlevel(){
        return level;

    }

};

int main(){
    Hero Ramesh;
    cout<<Ramesh.health;
    Ramesh.setlevel('A');
    Ramesh.getlevel();
}



//padding  and greedy alignment   