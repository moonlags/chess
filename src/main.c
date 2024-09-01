#include "textures.h"
#include <raylib.h>

int WIDTH = 960;
int HEIGHT = 640;

int main(int argc, char *argv[]) {
  InitWindow(WIDTH, HEIGHT, "Chess");
  SetTargetFPS(60);

  Texture2D boardTex = boardTexture();
  Texture2D playerTex = playerTexture();

  while (!WindowShouldClose()) {
    BeginDrawing();

    ClearBackground(WHITE);

    // draw board
    DrawRectangle(0, 0, 320, 640, DARKGRAY);
    DrawTexture(boardTex, 320, 0, WHITE);

    // draw player avatar and name
    DrawTexture(playerTex, 20, 20, WHITE);
    DrawRectangleLines(20, 20, 100, 100, BLACK);
    DrawText("Mikhail Adun", 135, 60, 28, WHITE);

    EndDrawing();
  }

  UnloadTexture(playerTex);
  UnloadTexture(boardTex);
  CloseWindow();

  return 0;
}
