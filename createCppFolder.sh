mkdir -p $1
mkdir -p $1/src
mkdir -p $1/includes
cp $(pwd)/Makefile $1
cp $(pwd)/clang-format $1/.clang-format
cp $(pwd)/src-Makefile $1/src/Makefile
