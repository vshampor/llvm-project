#include "llvm/ADT/Statistic.h"
#include "llvm/IR/Function.h"
#include "llvm/Pass.h"
#include "llvm/PassSupport.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/InstrTypes.h"
#include "llvm/Transforms/BranchInstCount/BranchInstCount.h"

using namespace llvm;

#define DEBUG_TYPE "branchinstcount"

STATISTIC(NumCondBranch, "Number of conditional branches in the program");
STATISTIC(NumUncondBranch, "Number of unconditional branches in the program");
STATISTIC(NumEqBranch, "Number of conditional branches whose comparison type is an equality test");
STATISTIC(NumGTBranch, "Number of conditional branches whose comparison type is a greater than test");
STATISTIC(NumLTBranch, "Number of conditional branches whose comparison type is a less than test");

struct BranchInstCount : public BasicBlockPass {
static char ID; // Pass identification, replacement for typeid
BranchInstCount() : BasicBlockPass(ID) {}

bool runOnBasicBlock(BasicBlock& BB) override {
    // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    // Insert your actual branch instruction counting code here
    // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    return false;
}
};

char BranchInstCount::ID = 0;

INITIALIZE_PASS_BEGIN(BranchInstCount, "branchinstcount", "Branch Instruction Counting", false, false)
INITIALIZE_PASS_END(BranchInstCount, "branchinstcount", "Branch Instruction Counting", false, false)

namespace llvm
{
    // The public interface to this file...
    BasicBlockPass *createBranchInstCountPass() {
      return new BranchInstCount();
    }
}
