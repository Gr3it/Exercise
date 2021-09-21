#include <iostream>

using namespace std;

int main()
{
  cout << " AND\t OR" << endl;
  cout << "A B R\tA B R" << endl << endl; 
  cout << 0 <<" "<< 0 <<" "<< (0 && 0) << "\t" << 0 <<" "<< 0 <<" "<< (0||0) << endl; 
  cout << 1 <<" "<< 0 <<" "<< (1 && 0) << "\t" << 1 <<" "<< 0 <<" "<< (1||0) << endl; 
  cout << 0 <<" "<< 1 <<" "<< (0 && 1) << "\t" << 0 <<" "<< 1 <<" "<< (0||1) << endl; 
  cout << 1 <<" "<< 1 <<" "<< (1 && 1) << "\t" << 1 <<" "<< 1 <<" "<< (1||1) << endl; 
  
  return 0;
}
