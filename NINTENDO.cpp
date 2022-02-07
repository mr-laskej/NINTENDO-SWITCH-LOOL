
#include <stdio.h>

int main()
{
	int a = 2, b = 3;
	printf("jakou operaci? \n");
	printf("1 - soucet\n");
	printf("2 - rozdil\n");
	printf("3 - soucin\n");
	printf("4 - podil\n");
	int volba = 0;
	float vysledek;
	scanf("%d", &volba);
	switch (volba) {
	case 1:
		vysledek = a + b;
		break;
	case 2:
		vysledek = a - b;
		break;
	case 3:
		vysledek = a * b;
		break;
	case 4: 
		vysledek = (float) a / b;
		break;
	default:
		printf("neplatna volba");
		}
	printf("vysledek: %f", vysledek);
}

