#include <iostream>
using namespace std;

typedef enum
{
  SATU,
  DUA,
  TIGA
} nomor_t;

class class_t
{
private:
  int variabel;

public:
  int myFunc(nomor_t nomor);
};

int class_t::myFunc(nomor_t nomor)
{
  switch (nomor)
  {
  case SATU:
    return 1;
    break;
  case DUA:
    return 2;
    break;
  case TIGA:
    return 3;
    break;
  }
}

int main()
{
  class_t my_class;
  cout << my_class.myFunc(SATU)  << endl;
}
