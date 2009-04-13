// File_test.cc -- Apr 12, 2009
//    by geohot

#include <iostream>
#include <cassert>
#include "../Model/File.h"

using namespace std;

int File_test()
{
  eda::File test;

  test.set(0, 0x20);
  test.set(4, 0x50);
  test.set(8, 0x104);

  assert(test[4]==0x50);
  assert(test[7]==0x50);
  assert(test[10]==0x104);
  assert(test[1]==0x20);

  cout << test[100] << " pass" << endl;

}
