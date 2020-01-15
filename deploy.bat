cd llvm
mkdir build
cd build
cmake .. -Thost=x64 -G"Visual Studio 16 2019" -A"x64"
"C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\Common7\IDE\devenv.exe" /build Debug LLVM.sln