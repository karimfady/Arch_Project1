# Arch_Project1
## Authors
**Rodayna Elkhouly**  
**Karim Fady**

## Submission Info
- **Project**: RISC-V32 Processor  
- **Milestone**: First  
- **Platform**: Verilog  
- **Date Completed**: April 10, 2025

---
# RISC-V32 Processor

## Project Overview

This project involves the design and implementation of a **RISC-V32 Processor** in **Verilog**, featuring a **5-stage pipelined architecture** to support the complete **RV32I instruction set**. The processor is capable of executing all **42 RV32I instructions**, with support for **hazard management**, **branching**, and **memory access optimizations**.

The project aims to simulate a fully functional **RISC-V32 processor**, with thorough **simulation testing** to verify its behavior and performance. The design resolves issues related to **structural hazards**, **control hazards**, and **data hazards** using operations-based hazard management, stalling, and a **two-memory unit architecture** to avoid conflicts between instruction and data memory access.

---

## Final Progress

- **Total instructions implemented**: 42  
- **Instructions fully working and tested**: 42  
- **Modules completed**:
  - **ALU (Arithmetic and Logic Unit)**
  - **Control Unit**
  - **Register File**
  - **Instruction Memory**
  - **Data Memory (2 separate memory units for instruction and data)**
  - **5-Stage Pipeline** (IF, ID, EX, MEM, WB)
  - **Hazard Management** (Operations-based hazard handling and stalling)
  - **Branching Module** (Handling all branch instructions)
  
The project includes the successful implementation of all **42 RV32I instructions**, with complete integration into the processor pipeline and thorough **simulation testing** to verify its functionality.

---


---
## Known Issues

1. **Pipelining and Wiring**:  
   Initial challenges were encountered with ensuring proper **synchronization** and **data flow** between the different pipeline stages. Misalignments in connections and improper timing led to incorrect data propagation across stages.

2. **Branching Logic**:  
   Branch instructions initially caused control hazards, resulting in incorrect predictions and unnecessary pipeline flushes. We implemented a **dedicated branching module** to handle all branch-related operations, which resolved the issue, but future improvements can further enhance prediction accuracy.

3. **Shifter Module (Fixed)**:  
   Earlier versions of the **shifter module** produced incorrect outputs for shift-related instructions (`sll`, `srl`, `sra`). After debugging, the shifter logic was fixed and is now working as expected.

4. **Data Memory Access**:  
   The initial data memory implementation had issues with reading multiple addresses concurrently. This was resolved by implementing **two memory units**—one for instruction fetch and one for data memory—improving memory access efficiency and reducing latency.

---

---
## Testing

- **Simulation:** Verilog testbenches were used to simulate individual instructions and pipeline behavior. We tested for functional correctness, instruction handling, and performance under various conditions.
- **Working Instructions:** All basic arithmetic, logical, load/store, and branch instructions passed simulation checks.


---

## Conclusion

The **RISC-V32 Processor** project successfully implemented a fully functional 5-stage pipelined processor capable of handling all **42 RV32I instructions**, with careful consideration of **hazard management**, **branching**, and **memory access**. Despite initial challenges, the final design meets the objectives of the project, and future work will focus on further optimizations and enhancements for improved performance.

---


