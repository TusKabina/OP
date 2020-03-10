#include <iostream>
#include <windows.h>
using namespace std;

typedef struct Vector
{
	int* elementi;
	int logicka, fizicka;
}Vector;

Vector* vector_new()
{
	Vector* novi =new Vector();
	novi->logicka = 1;
	novi->fizicka = 0;
	novi->elementi = new int(novi->logicka);
	return novi;
}

Vector* vector_double(Vector* novi)
{
	novi->logicka = novi->logicka * 2;
	realloc(novi->elementi, novi->logicka*sizeof(int));
	 return novi;
}
Vector* push_back(Vector* novi, int vrijednost)
{

	if (novi->fizicka < novi->logicka)
	{
		novi->elementi[novi->fizicka] = vrijednost;
		novi->fizicka++;
	}
	else
	{
		novi=vector_double(novi);
		novi->elementi[novi->fizicka] = vrijednost;
		novi->fizicka++;
	}
	return novi;
}
void vector_delete(Vector* novi)
{
	delete[]novi->elementi;
	delete novi;

}
Vector* pop_back(Vector* novi)
{
	return novi;
}

int front(Vector* novi)
{
	return novi->elementi[0];
}
int back(Vector* novi)
{
	return novi->elementi[novi->fizicka-1];
}
int vector_size(Vector* novi)
{
	return novi->logicka;
}
int main()
{

	Vector* mojVector; 
	mojVector = vector_new();
	mojVector= push_back(mojVector, 3);
	mojVector = push_back(mojVector, 4);
	mojVector = push_back(mojVector, 5);
	mojVector = push_back(mojVector, 6);
	
	
	for (int i = 0; i < mojVector->logicka; i++)
	{
		printf("%d ", mojVector->elementi[i]);
	}
	printf(":%d ", vector_size(mojVector));
	//vector_delete(mojVector);

}
