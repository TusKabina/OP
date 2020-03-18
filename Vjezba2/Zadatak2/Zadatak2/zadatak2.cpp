#include <iostream>
#include <math.h>
using namespace std;

typedef struct _Kruznica
{
	float x;
	float y;
	float r;
}Kruznica;

float distance(float ax, float bx, float ay, float by)
{
	return sqrt(pow((ax - bx), 2) + pow((ay - by), 2));
}
int intersect(const Kruznica (&krug), Kruznica* nizKrugova,int n)
{
	int brojac=0;
	float duzina;
	
	for (int i = 1; i < n; i++)
	{
		duzina = distance(nizKrugova[i].x, nizKrugova[i].y, krug.x, krug.y);
		float radius = pow(nizKrugova[i].r + krug.r + nizKrugova[i].r + krug.r, 2);
		if (duzina < radius)
		{
			brojac++;
		}
	}
	return brojac;
}

int main()
{
	
	Kruznica mojaKruznica[7] = { {1,5,2},{2,4,8},{10,12,18},{16,13,32},{22,18,15},{1,11,22},{21,13,3} };
	int n = sizeof(mojaKruznica) / sizeof(mojaKruznica[0]);

	cout << "presjeka ima:" << intersect(mojaKruznica[0], mojaKruznica, n) << endl;
}