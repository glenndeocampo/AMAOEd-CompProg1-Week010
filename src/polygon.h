#include <string>
#include <sstream>

using namespace std;

class Polygon {
  
  string Name, Color;
  short Sides;


public:
 Polygon(string name, short nsides, string color) {
     Name = name;
     Sides = nsides;
     Color = color;
 }

 string getPolygon() {
     ostringstream s;
     s << "Name: " << Name << endl;
     s << "No. of Sides: " << Sides << endl;
     s << "Color: " << Color << endl;
     return s.str();
 }
};