#include "9cc.h"

int main(int argc, char **argv) {
  if (argc != 2) {
    fprintf(stderr, "引数の個数が正しくありません\n");
    return 1;
  }

  user_input = argv[1];
  token = tokenize();

  locals = calloc(1, sizeof(LVar));
  locals->next = NULL;
  locals->offset = 0;

  program();
  codegen();

  return 0;
}
