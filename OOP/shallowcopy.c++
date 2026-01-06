#include<iostream>
#include<cstring>
using namespace std;

class Hero{
    private:
      char *health;

    public:
        char *name;
        int value;

        Hero simple(Hero& copy){
          cout<<"simple constructor called";
          name = new char[100];
        }
        
        void print(){
        cout << endl;
        cout << "Name: " << this->name<< endl;
        }

        void setname(char name[]){
          strcpy(this -> name,name);
        }


};

int main(){
    Hero h ;

    char name[8] = "shubham";
    h.setname(name);
    h.print();


    Hero t(h);
    t.print();

  
    h.name[0]='p';

    h.print();

    t.print();





}