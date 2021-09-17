#include <iostream>

using namespace std;

int main()
{
  int dividendo, divisore;
  cout << "inserire il dividendo e poi il divisore" << endl;
  cin >> dividendo >> divisore;
  cout << "il quoziente e: " << dividendo / divisore << endl << "il resto e: " << dividendo % divisore << endl;

  return 0;
}
