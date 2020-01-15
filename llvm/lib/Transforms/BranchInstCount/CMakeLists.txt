if(WIN32 OR CYGWIN)
  set(LLVM_LINK_COMPONENTS Core Support)
endif()

add_llvm_library( LLVMBranchInstCount
  BranchInstCount.cpp

  DEPENDS
  intrinsics_gen
  )
