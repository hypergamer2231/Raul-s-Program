#include <iostream>
#include <windows.h>

using namespace std;

bool game_running = true;

int x = 1;
int y = 1;


char map[10][20] = {

  "###################",
  "#                 #",
  "#                 #",
  "#                 #",
  "#                 #",
  "#                 #",
  "#                 #",
  "#                 #",
  "###################",
};

int main() {
 while (game_running = true) {
  system("cls");
  for (int display = 0; display < 10; display++) {
   cout << map[display] << endl;
   }
   system("pause>nul");
  if (GetAsyncKeyState(VK_DOWN)) {
   int y2 = y + 1;
   if (map[y2][x] == ' ') {
    map[y][x] = ' ';
    y++;
    map[y][x] = '@';
   }
  }

  if (GetAsyncKeyState(VK_UP)) {
   int y2 = y - 1;
   if (map[y2][x] == ' ') {
    map[y][x] = ' ';
    y--;
    map[y][x] = '@';
   }
  }

  if (GetAsyncKeyState(VK_RIGHT)) {
   int x2 = x + 1;
   if (map[y][x2] == ' ') {
    map[y][x] = ' ';
    x++;
    map[y][x] = '@';
   }
  }

  if (GetAsyncKeyState(VK_LEFT)) {
   int x2 = x - 1;
   if (map[y][x2] == ' ') {
    map[y][x] = ' ';
    x--;
    map[y][x] = '@';
   }
  }
 }
 return 0;
}

