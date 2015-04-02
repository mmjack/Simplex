#ifndef _SIMPLEX_TABLAEU_DEF_H_
#define _SIMPLEX_TABLAEU_DEF_H_
#include "column.h"

typedef struct {
  column* columns;
  float* rowData;
  int numColumns;
  int numRows;
} table;

/**
 * Initialise all the table values
 */
void initialiseTable(table* instance);

/**
 * Free any memory associated with the table instance
 */
void freeTable(table* instance);

/**
 * Get the index of the column in the table
 */
int getTableColumnId(table* instance, char const* name);

/**
 * Get a columns information from the table
 */
column* getTableColumn(table* instance, char const* name);

/**
 * Add a new column to the table
 */
int addTableColumn(table* instance, char const* name, size_t nameLength);
int getTableColumnIdWithLength(table* instance, char const* name, size_t nameLength);

/**
 * Add a new row to the table
 */
void addTableRow(table* instance);

/**
 * Expand all the rows after a column is added to the table
 */
void expandRows(table* instance, int oldNumColumns, int newNumColumns);

/**
 * Return the ID of the last row added
 */
unsigned int getCurrentRow();

/**
 * Return a pointer to the row data for the specified row number
 */
float* getRowData(unsigned int rowNum);

/**
 * Get the table data at a given field
 */
float getTableField(unsigned int row, unsigned int column);

/**
 * Set the table data at a given field
 */
void setTableField(unsigned int row, unsigned int column, float val) {

/**
 * Print debug info about the table
 */
void printTable(table* instance);

#endif //_SIMPLEX_TABLAEU_DEF_H_
