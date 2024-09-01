#include "textures.h"
#include <raylib.h>

Texture2D boardTexture() {
  Image board = LoadImage("assets/board.png");
  ImageResize(&board, 640, 640);

  Texture2D boardTex = LoadTextureFromImage(board);
  UnloadImage(board);

  return boardTex;
}

Texture2D playerTexture() {
  Image player = LoadImage("assets/player.png");
  ImageCrop(&player, (Rectangle){150, 0, 550, 500});
  ImageResize(&player, 100, 100);

  Texture2D playerTex = LoadTextureFromImage(player);
  UnloadImage(player);

  return playerTex;
}
