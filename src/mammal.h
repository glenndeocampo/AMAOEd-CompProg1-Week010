#include <string>
#include <sstream>

using namespace std;

class LeggedMammal {
  
  short nLegs;
  string sFur;
  bool bTail;

public:
 LeggedMammal(short legs, string fur, bool hasTail) {
     nLegs = legs;
     sFur = fur;
     bTail = hasTail;
 }

 string getMammal() {
     ostringstream s;
     s << "No. of Legs: " << nLegs << endl;
     s << "Kind of Fur: " << sFur << endl;
     s << "Presence of Tail: " << bTail << endl;
     return s.str();
 }
};