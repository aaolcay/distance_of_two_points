/**
Abdullah Azzam Olcay - Gebze Technical University
**/
#include<iostream>
#include<math.h>
using namespace std;

class Point{
private:
	double x;
	double y;
public:
	double getX();
	double getY();
	void setX(double);
	void setY(double);
	Point(double,double);
	Point add(Point&);
	double distance(Point&);
	void print();	
	~Point();
};

double Point::getX(){
	return x;
}
double Point::getY(){
	return y;
}
void Point::setX(double x){
	this->x=x;
}
void Point::setY(double y){
	this->y=y;
}
double Point::distance(Point& p){
	double distance_x = p.getX()-x;
	double distance_y = p.getY()-y;
	double power_x = pow(distance_x,2);
	double power_y = pow(distance_y,2);
	double distance = sqrt(power_x+power_y);
	return distance;
}

Point::Point(double x,double y){
	this->x=x;
	this->y=y;
}

Point Point::add(Point& p){
	double add_x=p.x+this->x;
	double add_y=p.y+this->y;
	return Point(add_x,add_y);
}
void Point::print(){
	cout<<x<<","<<y<<endl;
}
Point::~Point(){
	cout<<"Destructor was worked"<<endl;
}
int main(){
	Point p1(1.8,2.3);
	Point p2(7.2,3.1);
	Point p3=p1.add(p2);
	cout<<"Addition is:"<<endl;
	p3.print();
	cout<<"Distance is:"<<endl;
	cout<<p1.distance(p2)<<endl;
	return 0;
}
