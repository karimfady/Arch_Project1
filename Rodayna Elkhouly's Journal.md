Rodayna Elkhouly's Journal
Day 1, 10:00AM: 
Started the project. Began researching the RISC-V32 instruction set and familiarizing myself with the specifications. Focused on understanding the basic instructions, including arithmetic and logical operations.

Day 2, 11:30AM:
Implemented the ADD and SUB instructions in Verilog. Simulated them and verified correct behavior for register-to-register operations.

Day 3, 2:00PM:
Implemented load/store instructions (LW, SW). Fixed an issue with memory addressing that was causing incorrect results. Verified correct behavior with basic test cases.

Day 4, 4:00PM:
Completed the remaining basic instructions (e.g., AND, OR, XOR). Ensured that the register file, ALU, and memory modules were working together. All basic instructions passed initial simulation tests.

Day 5, 9:00AM:
Started working on the 5-stage pipelined architecture. Focused on the Instruction Fetch (IF) and Instruction Decode (ID) stages. Encountered issues with timing and synchronization across stages.

Day 6, 1:30PM:
Completed the Execute (EX) stage of the pipeline. Integrated the ALU into the pipeline. Had some initial issues with data propagation between stages, but resolved them by adjusting control signals.

Day 7, 10:30AM:
Started working on hazard management. Implemented basic stalling for data hazards. Simulated and tested a few instructions. The pipeline was holding up well for simple instructions, but control hazards were causing issues.

Day 8, 3:00PM:
Developed and integrated the branch handling module to manage control hazards. Used a basic branch prediction approach, although we plan to improve it in later updates.

Day 9, 11:00AM:
Focused on refining the pipelining structure. Fixed issues with memory access conflicts and ensured the memory was being accessed correctly by separating instruction and data memory.

Day 10, 2:30PM:
Finished integrating the full 5-stage pipeline and tested all the 42 RV32I instructions. Everything is working as expected, and the processor passed all basic functional tests. Documented the final implementation and results.