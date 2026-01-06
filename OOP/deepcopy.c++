#include<iostream>
#include<cstring>
using namespace std;

class Hero{
    private:
      char *health;

    public:
        char *name;
        int value;

        Hero (){
          cout<<"simple constructor called";
          name = new char[100];
        }
        
        void print(){
        cout << endl;
        cout << "Name: " << this->name<< endl;
        }

        Hero(Hero& temp) {

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor called" << endl;
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