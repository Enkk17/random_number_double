#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
double* generatore(int n);
void stampa(double* n,int totale);

int main()
{
double* numeri;
int totale;
cout << "quanti numeri vuoi generare? ";
cin >> totale;
numeri = new double[totale];
numeri=generatore(totale);
stampa(numeri,totale);
return 0;
}

double* generatore(int n)
{
srand(time(NULL));
double* array=new double[n];
double r;
for (int j = 0; j < n;j++)
{
//generiamo un numero di tipo double tenendo in considerazione i numeri fra 100.0 a 0
r=rand() / (double)RAND_MAX * 100;
array[j] = r;
}
return array;
}

void stampa(double n[], int totale)
{
for (int j = 0; j < totale;j++)
{
cout << n[j] << endl;
}
}
