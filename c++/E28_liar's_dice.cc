#include <iostream>
#include <cstdlib>

using namespace std;

int numberOfOneInNThrow(int n){
  int result = 0;
  for (int i = 0; i < n; i++){
    if((rand()%6+1)==1)
      result++;
  }
  return result;
}

int main()
{
  srand(time(NULL));
  int numberOfThrow = 10;

  int solution = numberOfOneInNThrow(numberOfThrow);

  int n;
  cout << "inserire il numero di 1 usciti dai lanci di " << numberOfThrow << " dadi: ";
  cin >> n;

  if(solution == n){
    cout << "hai indovinato! sono usciti " << n << " uni dai lanci di " << numberOfThrow << " dadi" << endl;
  }else{
    cout << "hai sbagliato. sono usciti " << solution << " uni dal lancio di " << numberOfThrow << " dadi e non " << n << " riprova un altra volta." << endl;
  }


  return 0;
}