#include <iostream>

using namespace std;
//kullanıcıdan 12 saatlik sistemde saati alıp bu saati
// 24 saatlik sisteme çeviren örnek kodu yazınız.

int main()
{
	cout << "Lutfen 12 lik sistemde bir saat giriniz(hh.mm.ssAM/PM): " << endl;
	char s[11];//karakter sayısından bir tane fazla yer ayırdım çünkü en sonda stringin bittiğini ifade eden end of string('\0') var.
	cin >> s;
	if(s[8]=='P'){
		char x[3];
		x[0]=s[0];
		x[1]=s[1];
		x[2]='\0';
		int saat = atoi(x);//bu kod satırı aşağıdaki yorum satırı yaptığımız kodların hepsinin yerine geçer.
		// Yani bu komut, ascii değeri alıp integer değere çeviriyor.a=ascii, i=integer
		/*
		int saat = 0;
		saat += (x[0]-48)*10;
		saat += x[1]-48;
		*/
		saat += 12;
		s[0] = (char)48 + saat/10;//19
		s[1] = (char)48 + saat%10;
		s[8] = '\0';
		cout << "saat: " << s << endl;
	}
	else{
		s[8] = '\0';//A ya end of string vererek string burada bitiyor demiş olduk.
		cout << s << endl;
	}
}