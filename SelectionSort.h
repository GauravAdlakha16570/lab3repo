#ifndef SELECTION_SORT
#define SELECTION_SORT
#include "Sort.h"
#include "container.h"

using namespace std;


class SelectionSort: public Sort
{
public:
  SelectionSort(){};
  void sort(Container* container);
};
#endif
