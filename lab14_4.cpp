#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d){
	int card[] = {50,100,500,1000};
	for(int i = 0; i < 4 ; i++){
		int money = card[i];
		int randnum = rand()%4;
		card[i] = card[randnum];
		card[randnum] = money;
	}
	a = card[0];
	b = card[1];
	c = card[2];
	d = card[3];
}