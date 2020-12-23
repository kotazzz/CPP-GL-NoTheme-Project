#include <iostream>
#include <list>

using namespace std;


int winsize_x = 100;
int winsize_y = 70;
list<list<char>> window_storage;

void init(list<list<char>> strg, int x, int y){
	list<char> tline;
	tline.resize(x, '1');
	for(int i; i < y; i++){
		strg.push_back(tline);
	}
	
}
int main() {
	cout << "Meow" << endl;
	system ("pause");
    return 0;
}