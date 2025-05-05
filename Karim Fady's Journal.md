Karim Fady's Journal
Day 1, 9:00AM:
Started the project. Spent time reviewing the RISC-V32 instruction set and understanding the overall architecture. Focused on reading through instruction types and initial design concepts.

Day 2, 12:00PM:
Implemented AND and OR instructions in Verilog. Simulated these instructions with basic test cases. Debugged an issue with the register file, which was not updating correctly.

Day 3, 2:30PM:
Worked on implementing branch instructions (BEQ, JAL). Encountered some difficulties with branch target calculation, but solved it by adjusting the offset calculation in the instruction decode stage.

Day 4, 4:30PM:
Completed the remaining instructions like ADDI and XOR. All implemented instructions passed basic functional tests. Prepared for transitioning into pipelining.

Day 5, 10:00AM:
Began implementing the 5-stage pipeline. Focused on the Execution (EX) stage and integrated it with the existing ALU. Encountered issues with the control signals, which were not properly syncing between the stages.

Day 6, 2:00PM:
Worked on refining the Data Memory (MEM) stage and added functionality for memory read and write operations. Faced challenges with memory data propagation, but resolved them by adjusting timing.

Day 7, 12:00PM:
Focused on handling data hazards in the pipeline. Implemented stalling to avoid incorrect data being used by instructions. Verified correct functionality with simple test cases.

Day 8, 3:30PM:
Developed the branch prediction logic for the control hazards. Integrated it into the pipeline. Encountered occasional incorrect predictions, but this was expected and will be improved in future updates.

Day 9, 11:30AM:
Worked on optimizing the pipelining architecture. Fixed issues related to data forwarding and improved memory access by implementing two memory units for instruction and data.

Day 10, 1:00PM:
Finalized the 5-stage pipeline and conducted comprehensive tests for all 42 RV32I instructions. All tests passed successfully, and the processor is now functioning correctly with hazard handling. Documented final results and code.