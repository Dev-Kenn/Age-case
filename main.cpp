#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char input;
	
	cout<< "Input letter grade (ABCDF)";
	cin>> input;
	
	switch(input)
	{
		case 'A':
		case 'a':
			cout<< "\nEXCELLENT";
			break;
		case 'B':
		case 'b':
			cout<< "\nABOVE AVERAGE";
			break;
		case 'C':
		case 'c':
			cout<< "\nAVERAGE";
			break;
		case 'D':
		case 'd':
			cout<< "\nBELOW AVERAGE";
			break;
		case 'F':
		case 'f':
			cout<< "\nFAILED";
			break;
		default:
			cout<< "\nWrong input, ony use letter A to F";
	}
	return 0;
}
