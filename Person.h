/***********************************
 * Person Class Declaration
 * Written by Allie Ianello 
 ***********************************/

class person
{ public:
    person();    // Null constructor
    bool get(istream&);
    void put(ostream&);
    bool operator == (const person& b);     // Equal to
    bool operator > (const person& b);      // Greater than
    bool operator < (const person& b);      // Less than
  private:
      string first;       // Person first name
      string last;        // Person last name
      int age;                 // Person age
};
