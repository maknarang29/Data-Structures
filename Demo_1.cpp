#include <iostream>
using namespace std;

class Circle{
    private:
    int radius;

    public:
    Circle (int r){
        radius = r;
    }

    void setRadius(int radius){
        this->radius = radius;
    }
    int getRadius(){
        return radius;
    }
};
class Utility{
    public:
    double calculateArea(Circle c){
        int r = c.getRadius();
        return 3.14*r*r;
    }
};
int main(){
    int radius = 0;
    cout<<"Enter the radius";
    cin>>radius;

    Circle obj(radius);
    Utility c1;
    cout<<"Circle Area: "<< c1.calculateArea(radius)<<"cm2"<<endl;
    return 0;

}
