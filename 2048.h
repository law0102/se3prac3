int read_input();

#define GO_LEFT 1
#define GO_RIGHT 2
#define GO_UP 4
#define GO_DOWN 8
#define GO_NOWHERE 0
#define INVALID_INPUT -1

int tilt_board_left(int size,int **board);
int tilt_board_right(int size,int **board);
int tilt_board_up(int size,int **board);
int tilt_board_down(int size,int **board);
int **board_create(int size);
int **board_flip(int **board, int size);
int board_display(int size,int **board);
int board_spawn_tile(int size,int **board);
int empty(int size, int**board);
int combine_tiles(int length,int *line,int offset);
int tilt_through_empty_space(int length, int *line);
int board_tiltable(int size, int** board);
int tilt_line_left(int length,int *line);
int tilt_line_right(int length,int *line);
int** board_clone(int board_size, int** board);
