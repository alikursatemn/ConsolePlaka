#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>


int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Turkish");
	int plk;
st:
	std::cout << "Hangi Plaka Kodunu ��renmek �stiyorsun ? =";
	std::cin >> plk;

	switch (plk) {
	case 01:
		printf("Adana\n");
		break;
	case 02:
		printf("Ad�yaman\n");
		break;
	case 03:
		printf("Afyon\n");
		break;
	case 04:
		printf("A�r�\n");
		break;
	case 05:
		printf("Amasya\n");
		break;
	case 06:
		printf("Ankara\n");
		break;
	case 07:
		printf("Antalya\n");
		break;
	case 8:
		printf("Artvin\n");
		break;
	case 9:
		printf("Ayd�n\n");
		break;
	case 10:
		printf("Bal�kesir\n");
		break;
	case 11:
		printf("Bilecik\n");
		break;
	case 12:
		printf("Bing�l\n");
		break;
	case 13:
		printf("Bitlis\n");
		break;
	case 14:
		printf("Bolu\n");
		break;
	case 15:
		printf("Burdur\n");
		break;
	case 16:
		printf("Bursa\n");
		break;
	case 17:
		printf("�anakkale\n");
		break;
	case 18:
		printf("�ank�r�\n");
		break;
	case 19:
		printf("�orum\n");
		break;
	case 20:
		printf("Denizli\n");
		break;
	case 21:
		printf("Diyarbak�r\n");
		break;
	case 22:
		printf("Edirne\n");
		break;
	case 23:
		printf("Elaz��\n");
		break;
	case 24:
		printf("Erzincan\n");
		break;
	case 25:
		printf("Erzurum\n");
		break;
	case 26:
		printf("Eski�ehir\n");
		break;
	case 27:
		printf("Gaziantep\n");
		break;
	case 28:
		printf("Giresun\n");
		break;
	case 29:
		printf("G�m��hane\n");
		break;
	case 30:
		printf("Hakkari\n");
		break;
	case 31:
		printf("Hatay\n");
		break;
	case 32:
		printf("Isparta\n");
		break;
	case 33:
		printf("Mersin\n");
		break;
	case 34:
		printf("�stanbul\n");
		break;
	case 35:
		printf("�zmir\n");
		break;
	case 36:
		printf("Kars\n");
		break;
	case 37:
		printf("Kastamonu\n");
		break;
	case 38:
		printf("Kayseri\n");
		break;
	case 39:
		printf("K�rklareli\n");
		break;
	case 40:
		printf("K�r�ehir\n");
		break;
	case 41:
		printf("Kocaeli\n");
		break;
	case 42:
		printf("Konya\n");
		break;
	case 43:
		printf("K�tahya\n");
		break;
	case 44:
		printf("Malatya\n");
		break;
	case 45:
		printf("Manisa\n");
		break;
	case 46:
		printf("Kahramanmara�\n");
		break;
	case 47:
		printf("Mardin\n");
		break;
	case 48:
		printf("Mu�la\n");
		break;
	case 49:
		printf("Mu�\n");
		break;
	case 50:
		printf("Nev�ehir\n");
		break;
	case 51:
		printf("Ni�de\n");
		break;
	case 52:
		printf("Ordu\n");
		break;
	case 53:
		printf("Rize\n");
		break;
	case 54:
		printf("Sakarya\n");
		break;
	case 55:
		printf("Samsun\n");
		break;
	case 56:
		printf("Siirt\n");
		break;
	case 57:
		printf("Sinop\n");
		break;
	case 58:
		printf("Sivas\n");
		break;
	case 59:
		printf("Tekirda�\n");
		break;
	case 60:
		printf("Tokat\n");
		break;
	case 61:
		printf("Trabzon\n");
		break;
	case 62:
		printf("Tunceli\n");
		break;
	case 63:
		printf("�anl�urfa\n");
		break;
	case 64:
		printf("U�ak\n");
		break;
	case 65:
		printf("Van\n");
		break;
	case 66:
		printf("Yozgat\n");
		break;
	case 67:
		printf("Zonguldak\n");
		break;
	case 68:
		printf("Aksaray\n");
		break;
	case 69:
		printf("Bayburt\n");
		break;
	case 70:
		printf("Karaman\n");
		break;
	case 71:
		printf("K�r�kkale\n");
		break;
	case 72:
		printf("Batman\n");
		break;
	case 73:
		printf("��rnak\n");
		break;
	case 74:
		printf("Bart�n\n");
		break;
	case 75:
		printf("Ardahan\n");
		break;
	case 76:
		printf("I�d�r\n");
		break;
	case 77:
		printf("Yalova\n");
		break;
	case 78:
		printf("Karab�k\n");
		break;
	case 79:
		printf("Kilis\n");
		break;
	case 80:
		printf("Osmaniye\n");
		break;
	case 81:
		printf("D�zce\n");
		break;
	}
	if (plk >= 82)
	{
		printf("B�yle bir plaka bulunamamaktad�r.\n");
	}


	goto st;

	system("PAUSE");
	return 0;
}