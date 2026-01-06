#include<iostream>
using namespace std;

class Hero{
    private:
      char health;

    public:
        int value;

        Hero simple(Hero& copy){
          cout<<"copy constructor called";
        }
        Hero(char health){
          cout<<"parametrized constructor called"<<endl;
          this ->health = health;
        }
        void print(){
          cout<<"health : "<<health;
        }
        int gethealth(){
          return health;
        }

        int getvalue(){
          return value;
        }

        void setvalue(int v){
          value = v;
        }

        void sethealth(char h){
          health = h;
        }


};

int main(){
    Hero h(10) ;
    h.print();

    cout<<h.gethealth()<<endl;

    Hero t(h);
    t.print();

  






    // cout<<"get health , private member value : "<<h.gethealth()<<endl;

    // h.sethealth('C');

    // cout<<"get health , after assiging value private member value : "<<h.gethealth()<<endl;

    // cout<<"set value , public member value : "<<h.getvalue()<<endl;

    // h.setvalue(5);

    // cout<<"get value , public member value : "<<h.getvalue()<<endl;


    // cout<<"size of ramesh   "<<sizeof(h)<<endl;

    // h.print();
}