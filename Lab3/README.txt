Lab 3 - README
==========================================================

LEADER
mrubi005@ucr.edu

MEMBERS
==========================================================
mrubi005@ucr.edu

REMARKS
- There are some code optimisations that were done in this lab.
- The main optimisations can be seen in the control_unit.v where istead of setting all variables at once. Instead the variables are set to zero at the beginning of the combinational logic and then only the bits that need to be set to 1 are manipulated.
- In alu_control the variables names are also used instead of bits.
- No variable names were used in previous quarter. I took previous labs as template for the variable names but did some optimisations that helped with the alu_control. If you are comparing to previous variables look at the functions, instead of them being 6 bits they are 4 bits, This is important.
- for the instruction_5_0 on the lower 4 bits are used since these are the ones that determine the alu operation to perform.
==========================================================

BUGS IF ANY 
- No known bugs



==========================================================

ORIGINAL WORK STATEMENT
- I certify that this submission represents my own original work. This submission was not done in collaboration nor was any substanial portion of the code obtained from third parties, including websites and the like.
