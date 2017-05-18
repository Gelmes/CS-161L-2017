Lab 5 - README
==========================================================

LEADER
mrubi005@ucr.edu

MEMBERS
==========================================================
mrubi005@ucr.edu

REMARKS
- This Lab was tough as expected. Specially since I had no previous working code so I coded everything from scratch AND made some updates to my code from last quarter.
- In this Lab I creted modules for most of the Datapath stages you will see them named IF_stage, ID_stage, and EX_stage. Implementting the MEM_stage was not fully possible since the data was fetched from the same module already found in the IF_stage. This left a single branch for the MEM stage and a mux for the WB stage so no module was necessary.
- This code is conciderably cleaner from last quarters since the gen_registers were formatted as clean as possible.
- Naming conventions between stages were also carefully chosen to be as clear as possible.
- Instead of using defparam I decided to use #(1) to create single bit registers.
- overall this code is conciderly improoved from last quarters.
==========================================================

BUGS IF ANY 
- Not sure if this is a bug but my prog_count did not line up with your prog_count, im guessing this is probably because you did not reset your prog_counter when the reset was encountered. I decided to keep mine as is since it makes since to reset prog_count on reset and increase it at every cycle.


==========================================================

ORIGINAL WORK STATEMENT
- I certify that this submission represents my own original work. This submission was not done in collaboration nor was any substanial portion of the code obtained from third parties, including websites and the like.
