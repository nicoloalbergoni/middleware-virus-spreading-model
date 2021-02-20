#include "parameters.h"

struct CellList_t {
  int id;
  struct CellList_t* next;
};
typedef struct CellList_t CellList;

//Represent a cell of the grid
//It contains the pointer to the head of the associated list
typedef struct
{
  int countryID;
  CellList* head;
} Cell;

void push(CellList** head, int val);
void printList(CellList* head, int row, int col);
void clearGrid(int height, int width, Cell grid[height][width], Config config);
int assignCountries(int height, int width, Cell grid[height][width], Config config);