#include<iostream>
using namespace std;
class point{
    public:
    virtual void draw(){
        cout<<"point\n";
    }
};
class line : public point{
     void draw(){
        cout<<"line\n";
    }
};
class triangle : public point{
     void draw(){
        cout<<"tirangle\n";
    }
};
class polygon : public point{
     void draw(){
        cout<<"polygon\n";
    }
};
class circle : public point{
     void draw(){
        cout<<"circle\n";
    }
};

int main(){
    point p;
    triangle t;
    polygon poly;
    circle c;
    line l;

    point *bpter[] = {&p, &t,&poly,&c,&l};
    int i ;
    for( i = 0 ; i <5; i++){
        bpter[i]->draw();
    }
}