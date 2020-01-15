/*
 * BranchInstCount.h
 *
 *  Created on: Jan 19, 2020
 *      Author: vshampor
 */

#ifndef INCLUDE_LLVM_TRANSFORMS_BRANCHINSTCOUNT_BRANCHINSTCOUNT_H_
#define INCLUDE_LLVM_TRANSFORMS_BRANCHINSTCOUNT_BRANCHINSTCOUNT_H_

namespace llvm
{

BasicBlockPass *createBranchInstCountPass();

}


#endif /* INCLUDE_LLVM_TRANSFORMS_BRANCHINSTCOUNT_BRANCHINSTCOUNT_H_ */
