#ifndef COMPILER_H_
#define COMPILER_H_

extern FILE *SOURCE;
extern char *FILENAME;
extern int CHAR;
extern int LINE;
extern int COLUMN;

extern int compile(char *filename);

#endif
