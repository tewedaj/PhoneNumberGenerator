#include <iostream>
#include <fstream> //vcf
#include <thread>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
ofstream phoneNum("contasdacasdft.vcf");
	
void getNumbers(int firstNum,int names){
	for(int x=0;x<1000;x++){
		phoneNum<<"BEGIN:VCARD"<<endl;
		phoneNum<<"VERSION:3.0"<<endl;
		phoneNum<<"FN:"<<names<<endl;
		phoneNum<<"N:;"<<names<<";;;"<<endl;
		phoneNum<<"item1.TEL:+2519"<<firstNum<<endl;
		phoneNum<<"item1.X-ABLabel:"<<endl;
		phoneNum<<"END:VCARD"<<endl;
		firstNum++;
		names++;
		cout<<names<<endl;
	}
}
int main(int argc, char** argv) {
	int firstNum=11000000;
	int names	=1;
	int secondNum = 11001002;
	int names2 =1002;
	 thread f1(getNumbers,ref(firstNum),ref(names));
	this_thread::sleep_for(chrono::milliseconds(20000));
	thread f2(getNumbers,ref(secondNum),ref(names2));
	

	return 0;
}
/*
BEGIN:VCARD
VERSION:3.0
FN:036F
N:;036F;;;
item1.TEL:+251936000001
item1.X-ABLabel:
END:VCARD
*/
