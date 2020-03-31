#ifndef _MYSTRING_H_
#define _MYSTRING_H_
#include <iostream>

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

private:
    char *str;      // pointer to a char[] that holds a C-style string
public:
    Mystring();                                                         // No-args constructor
    Mystring(const char *s);                                     // Overloaded constructor
    Mystring(const Mystring &source);                    // Copy constructor Copy constructor is called when a new object is created from an existing object,
    Mystring( Mystring &&source);                         // Move constructor
    ~Mystring();                                                     // Destructor
    
    Mystring &operator=(const Mystring &rhs);     // Copy assignment is called when an already initialized object is assigned a new value from another existing object.
    Mystring &operator=(Mystring &&rhs);           // Move assignment

   //First, overload the operators using member functions.
    Mystring operator-() const;  // make lowercase
    bool operator==(const Mystring &rhs) const; // check equality
    bool operator!=(const Mystring &rhs) const; // check not equality
    bool operator<(const Mystring &rhs) const; // check equality
    bool operator>(const Mystring &rhs) const; // check equality
    Mystring operator+(const Mystring &rhs) const; // check equality
    Mystring &operator+=(const Mystring &rhs); // check equality
    Mystring operator*(int rhs) const; // check equality
    Mystring &operator*=(int rhs); // check equality

    void display() const;
    
    int get_length() const;                                      // getters
    const char *get_str() const;
};

#endif // _MYSTRING_H_