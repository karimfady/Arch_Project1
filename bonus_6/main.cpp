#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <fstream>

using namespace std;

// Define registers for RV32I (x0 to x31)
const vector<string> registers = {
    "x0", "x1", "x2", "x3", "x4", "x5", "x6", "x7", "x8", "x9",
    "x10", "x11", "x12", "x13", "x14", "x15", "x16", "x17", "x18",
    "x19", "x20", "x21", "x22", "x23", "x24", "x25", "x26", "x27",
    "x28", "x29", "x30", "x31"
};

// Define available instructions and their formats
enum InstructionType {
    ADD, SUB, LD, ST, BEQ
};

// Random number generator
random_device rd;
mt19937 gen(rd());
uniform_int_distribution<> dis(0, 31);

// Generate a random instruction
string generateRandomInstruction() {
    // Randomly select an instruction type
    InstructionType instr = static_cast<InstructionType>(dis(gen) % 5); // Select from 5 instruction types

    switch(instr) {
        case ADD: {
            // R-type: ADD rd, rs1, rs2
            string rd = registers[dis(gen) % 32];
            string rs1 = registers[dis(gen) % 32];
            string rs2 = registers[dis(gen) % 32];
            return "ADD " + rd + ", " + rs1 + ", " + rs2;
        }
        case SUB: {
            // R-type: SUB rd, rs1, rs2
            string rd = registers[dis(gen) % 32];
            string rs1 = registers[dis(gen) % 32];
            string rs2 = registers[dis(gen) % 32];
            return "SUB " + rd + ", " + rs1 + ", " + rs2;
        }
        case LD: {
            // I-type: LD rd, imm(rs1)
            string rd = registers[dis(gen) % 32];
            int imm = dis(gen) % 1024;  // 10-bit immediate value
            string rs1 = registers[dis(gen) % 32];
            return "LD " + rd + ", " + to_string(imm) + "(" + rs1 + ")";
        }
        case ST: {
            // S-type: ST rs2, imm(rs1)
            string rs2 = registers[dis(gen) % 32];
            int imm = dis(gen) % 1024;  // 10-bit immediate value
            string rs1 = registers[dis(gen) % 32];
            return "ST " + rs2 + ", " + to_string(imm) + "(" + rs1 + ")";
        }
        case BEQ: {
            // B-type: BEQ rs1, rs2, imm
            string rs1 = registers[dis(gen) % 32];
            string rs2 = registers[dis(gen) % 32];
            int imm = dis(gen) % 1024;  // 10-bit immediate value
            return "BEQ " + rs1 + ", " + rs2 + ", " + to_string(imm);
        }
        default:
            return "";
    }
}

// Generate a test program with a specified number of instructions
vector<string> generateTestProgram(int numInstructions = 10) {
    vector<string> program;
    for (int i = 0; i < numInstructions; ++i) {
        program.push_back(generateRandomInstruction());
    }
    return program;
}

int main() {
    // Generate a test program with 10 random instructions
    vector<string> testProgram = generateTestProgram();

    // Output the generated test program to a file
    ofstream outputFile("test_program.txt");

    if (outputFile.is_open()) {
        outputFile << "Generated Test Program:\n";
        for (const auto& instruction : testProgram) {
            outputFile << instruction << endl;
        }
        outputFile.close();
        cout << "Test program has been written to 'test_program.txt'" << endl;
    } else {
        cout << "Unable to open the file for writing." << endl;
    }

    return 0;
}
