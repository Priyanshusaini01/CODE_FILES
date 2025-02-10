#include<iostream>
using namespace std;

class Engine{
    public:
    string type;
    Engine(string c){
        this->type= c;
    }
    void show(){
        cout<<"Engine type "<<type<<endl;
    }

};

class car{

    string brand;
    Engine * engine; // access another class from this class 
    public:
    car(string b, Engine * e ){
        this->brand=b;
        this->engine=e;
    }
    void showdetails(){
        cout<<"Brand: "<<brand<<endl;
        engine->show();// by doing this you are access the memver function of another class
    }
};

int main(){
    Engine ege("V8");

    car c("BMW",&ege); // pass the referece 
    c.showdetails();

return 0;
}