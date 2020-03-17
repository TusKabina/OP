#include <iostream>


using namespace std;

typedef struct _Vector
{
	int* element;
	int fizicka;
	int logicka;


	
	bool checkFull()
	{
		if (logicka == fizicka)
			return true;
		else
			return false;
	}
	void vector_new(unsigned n)
	{
		fizicka = n;
		logicka = 0;
		element = new int[fizicka];
	}
	int* double_vector(int* element)
	{
		fizicka = fizicka * 2;
		int* temp = new int[fizicka * 2];
		copy(element, element + logicka, temp);
		delete[] element;
		return temp;
	}
	void vector_push_back(int vrijednost)
	{
		if (!checkFull())
		{
			element[logicka] = vrijednost;
			logicka++;
		}
		else
		{
			element = double_vector(element);
			element[logicka] = vrijednost;
			logicka++;
		}
	}
	void vector_pop_back()
	{
		for (int i = fizicka; i == 0; i--)
		{
			element[i] = element[i - 1];

		}
		logicka--;
	}

	void vector_delete()
	{
		logicka = 0;
		fizicka = 0;
		delete[]element;
	}

	int& vector_front()
	{
		return element[0];
	}

	int& vector_back()
	{
		return element[logicka - 1];
	}

	int vector_size()
	{
		return fizicka;
	}

	int vector_size_logical()
	{
		return logicka;
	}

	
	void vector_print()
	{
		for (int i = 0; i < logicka; i++)
		{
			cout << " " << element[i];
		}
	}
	
}Vector;



int main()
{
	Vector mojVector;
	mojVector.vector_new(3);
	mojVector.vector_push_back(1); // fizicka=1,logicka 1
	mojVector.vector_push_back(2); // fizicka=2,logicka 2
	mojVector.vector_push_back(3);// fizicka=3,logicka 4
	mojVector.vector_push_back(4);// fizicka=3,logicka 4
	mojVector.vector_push_back(5);// fizicka=4,logicka 8
	mojVector.vector_push_back(6);// fizicka=5,logicka 8
	mojVector.vector_push_back(7);// fizicka=6,logicka 8
	mojVector.vector_push_back(8);// fizicka=7,logicka 8
	mojVector.vector_push_back(9);// fizicka=8,logicka 16
	mojVector.vector_push_back(10);// fizicka=9,logicka 16
	mojVector.vector_pop_back();
	mojVector.vector_front()++;
	mojVector.vector_back()++;
	mojVector.vector_print();
	int n = mojVector.vector_size();
	int m = mojVector.vector_size_logical();
	cout << " fizicka velicina vectora je " << n << "logicka velicina vectora je " << m << endl;

}