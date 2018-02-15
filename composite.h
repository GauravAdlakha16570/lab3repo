#ifndef COMPOSITE_H
#define COMPOSITE_H
#include "component.h"

using namespace std;

class composite : public Base{
protected:
Base* left;
Base* right;
char Operator;
public:
virtual double evaluate() = 0;
};

#endif
