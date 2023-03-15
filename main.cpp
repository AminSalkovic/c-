#include <iostream>
using namespace std;

bool gameOver;
const int width = 20;
const int height = 10;
int x, y, fruitX, fruitY, score;

void Draw(){
  system("cls");
  for(int i=0;i<width+2;i++){
    cout<<"#";
  }
  for(int i=0;i<height;i++){
    cout <<"#"<<endl;
  }
  cout << endl;
  for(int i=0;i<width+2;i++){
    cout<<"#";
  }
}

int main(){
    Draw();
    return 0;
}
