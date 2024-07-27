#include <bits/stdc++.h>
using namespace std;
class base{//base class
    public:
     void print(){
        cout<<"base_classss"<<endl;
    }
     void show(){
        cout<<"show base class"<<endl;
    }
};
    class derived: public base
    {//derived class
        public:
        void print(){
            cout<<"derived class"<<endl;
        }
        void show(){
            cout<<"show derived class"<<endl;
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
