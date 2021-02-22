#include <iostream>
#include <fstream>
using namespace std;

const int SIZE = 200;
ifstream plik("dane_obrazki.txt");
char t[21][21];

void zczytaj()
{
	
	for (int i=0;i<21;i++)
	{
    	for (int j=0;j<21;j++) 
		{
      		plik >> t[i][j];
    	}
 	}
  
}

void wynik() 
{
  int czarne=0; 
  int biale=0;
  
  for (int i=0;i<20;i++)
  {
  	for (int j=0;j<20;j++) 
  	{
      if (t[i][j] == '0') czarne++;
      if (t[i][j] == '1') biale++;
  	}
  }
  
  cout<<"Czarne (0): "<<czarne<<endl;
  cout<<"Biale (1): "<<biale;
  
}


int main() 
{
	zczytaj();
	wynik();
	
	return 0;
}
