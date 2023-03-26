#include "cone.h";
#include <iostre        am>
#include <cmath>
using namespace std;
Cone :: Cone() { x=y=z=radius=height=0; }
Cone :: Cone(double r, double h) {
            x = y = z = 0.0;
            radius = r;
            height = h;
        }
Cone :: Cone(double a, double b, double c, double r, double h) {
            x = a;
            y = b;
            z = c;
            radius = r;
            height = h;
        }
void Coin :: setCoordinate(double a, double b, double c) { x = a; y = b; z = c; }
void Coin :: setRadius(double r) { radius = r; }
void Coin :: setHeight(double h) { height = h; }
double Coin :: getRadius() { return radius; }
double Coin :: getHeight() { return height; }
double Coin :: area() {
            double l = sqrt(height*height + radius*radius);
            return pi*radius*(radius+l);
}
double Coin :: volume() {
            return pi*radius*radius*height/3;
        }
friend Coin :: ostream &operator<<(ostream &stream, Cone obj);
};
ostream Coin :: &operator<<(ostream &stream, Cone obj) {
    stream << "(" << obj.x << "; ";
    stream << obj.y << "; ";
    stream << obj.z << ") ";
    stream << "r=" << obj.radius << " ";
    stream << "h=" << obj.height << "\n";
}