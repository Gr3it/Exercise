#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int n;
  bool flag=true;
  cout << "inserire un numero tra 0 e 1000 per verificare se sia vero: ";
  cin >> n;

  for (int i=2;i<sqrt(n) && flag ;i++){
    if(n%i==0){
      flag=false;
    }
  }
  if(flag){
    cout << "il numero è primo!" << endl;
  }else{
    cout << "il numero non è primo!" << endl;
  }

  return 0;
}