/**
 * main.c
 * 
 * The main entrypoint of the "I really love robots" program.  The
 * program prints the phrase "I really love robots!" to the screen.
 *
 * @author Tanya L. Crenshaw
 * @since August 2013
 *
 */
#include "robot.h"
#include <ctype.h>
/**
 * main()
 *
 * The main entrypoint of the program.
 * 
 * @param command line arguments.
 * 
 * @returns nothing.
 */
int main(int argc, const char * argv[])
{
if(argv[1] != NULL)
{
if(isdigit(*argv[1]))
{
  robotPrintAscii();
  dalekPrintAscii();
  robotPrintMessage();
}
}
else
  robotPrintAscii();

  return 0;
}
