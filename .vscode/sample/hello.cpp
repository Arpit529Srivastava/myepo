#include <bits/stdc++.h>
using namespace std;
class base{
    public:
    virtual void print(){
        cout<<"MADRCHOD_base_classss"<<endl;
    }
   virtual void show(){
        cout<<"hoe class"<<endl;
    }
};
    class derived: public base
    {
        public:
        void print(){
            cout<<"derived class"<<endl;
        }
        void show(){
            cout<<"show derived clas"<<endl;
        }
    };

int main() {
    base *ptr;
    derived d;
    ptr = &d;
    ptr->print(); 
    ptr->show();  
    return 0;
}
