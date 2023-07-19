#include<iostream>
using namespace std;

class course{
    public:
void show(){
    cout<<"course names:";
}
};
class math:public course{
        public:
void show(){
    cout<<"math";
}
};
class science:public course{
        public:
void show(){
    cout<<"courses cience:";
}
};
class engineering:public course{
        public:
void show(){
    cout<<"engineering";
}
};
class physics:public science{
        public:
void show(){
    cout<<"physics:";
}
};
class chemistry:public science{
        public:
void show(){
    cout<<"chemistry";
}
};
int main (){
    chemistry c1;
    c1.show();
    return 0;
}
