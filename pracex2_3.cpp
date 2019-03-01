#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
char table[8][8];
int r = rand() % 26;   
char c = 'A' + r;           
          
void showTable();
void randomTable();

int main(){
	srand(time(0));	
	randomTable();
	showTable();
}
void randomTable(){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){   
			 int r = rand() % 27;   
             char c = 'A' + r;   
			 cout <<  c << " ";
		}
		cout << "\n";
	}

}


void showTable(){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cout << table[i][j] << " ";
		}
		cout << "\n";
	}
}






