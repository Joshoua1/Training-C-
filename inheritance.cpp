#include<bits/stdc++.h>

using namespace std;

class person{
    private:
      int age;
      int weight;
      int hight;

    public:
      int getage(){
          return this.age;
      }

      int setage(int a){
        this.age=a;
      }

};

class Male: public Human{
    public: 
       string color;

    public:
    void walk(){
        cout<<"Walking"<<endl;    
        }
};

int main(){
    Male obj1;
    obj1.setage(45);
    cout<<obj1.getage();
    obj1.walk();
}