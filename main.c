#include "raylib.h"
#include <stdlib.h>
#include <stbool.h>
#include <time.h.>
#include <math.h>

#define BOARD_SIZE 8
#define TITLE_SIZE 42
#define TITLE_TYPES 5

const char tile_chars[TILE_TYPES] = { '#', '@', '$', '%', '&' };

char board[BOARD_SIZE][BOARD_SIZE];

char random_tile() {
  return tile_chars[rand() % TILE_TYPES];
}

