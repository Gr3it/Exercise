#include <iostream>

using namespace std;

int main()
{
  int day;
  do{
    cout << "inserire un giorno della settimana da 1 a 7: ";
    cin >> day;
  }while(day < 1 || day > 7);
  switch (day)
  {
  case (1):
    cout << "Lunedì" << endl;
    break;

  case (2):
    cout << "Martedì" << endl;
    break;
  
  case (3):
    cout << "Mercoledì" << endl;
    break;
  
  case (4):
    cout << "Giovedì" << endl;
    break;
  
  case (5):
    cout << "Venerdì" << endl;
    break;
  
  case (6):
    cout << "Sabato" << endl;
    break;
  
  case (7):
    cout << "Domenica" << endl;
    break;
  }
  return 0;
}