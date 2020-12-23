#include<iostream>
#include<conio.h>
using namespace std;

char wordList[20][10] = {
	"pooya", "emaRat", "Iran", "Zendegi", "Sobh", "farsh", "TeHRAN", "OmiD", "PEriDE"
, "EteMad", "aseman", "ShaEr", "esteghlal", "praid", "ali", "gavazn", "Folad", "Tanha", "sanali", "Type" };

int game(char kalame[])
{
	while (true)
	{
		cout << "\n";
		char temp[10];
		cin >> temp;

		int size = 0;
		for (int j = 0; j < 10; j++)
			if (kalame[j] != '\0')
				size++;

			else break;
		int rightalphabet = 0;
		int rightplace = 0;
		for (int j = 0; j < 10; j++)
		{
			bool jayedorost = false;
			bool isinword = false;
			for (int z = 0; z < 10; z++)
			{
				if ((temp[z] != '\0' || kalame[j] != '\0') && tolower(kalame[j]) == tolower(temp[z]))
				{
					isinword = true;
					if (j == z)
						 jayedorost = true;
					else
						for (int j_ = 0; j_ < j; j_++)
							if (tolower(kalame[j]) == tolower(kalame[j_]))
								 
								isinword = false;
				}
			}
			if (jayedorost)rightplace++;
			if (isinword)rightalphabet++;
		}
		cout << "\nright alphabet: " << rightalphabet;
		cout << "\nright place: " << rightplace;
		if (size == rightplace)
		{
			cout << "\nAnswer was: " << temp;
			cout << "\nDo you want to play again(n: no)(y: yes) ";
			char c;
			cin >> c;
			if (tolower(c) == 'n')
				return 0;
			if (tolower(c) == 'y')
				return 1;
			
		}
	}
}
void main()
{
	cout << "in bazi fekr bekre"<<"\n"<<"dont use space";
	for (int i = 0; i < 20; i++)
	{
		if (game(wordList[i]) == 0)
			cin.get();
	} 
}