#!/bin/bash

# ===============================
# 42 C++ Class Generator
# Usage: ./make_class.sh ClassName
# Generates: ClassName.hpp + ClassName.cpp
# ===============================

if [ -z "$1" ]; then
    echo "Usage: $0 ClassName"
    exit 1
fi

CLASSNAME=$1
HEADERFILE="${CLASSNAME}.hpp"
SOURCEFILE="${CLASSNAME}.cpp"
GUARD=$(echo "${CLASSNAME}_HPP" | tr '[:lower:]' '[:upper:]')

# Create header file
if [ -e "$HEADERFILE" ]; then
    echo "$HEADERFILE already exists, skipping..."
else
    cat <<EOF > "$HEADERFILE"
#ifndef $GUARD
#define $GUARD

#include <iostream>

class $CLASSNAME {
public:
    $CLASSNAME();
    $CLASSNAME(const $CLASSNAME &other);
    $CLASSNAME &operator=(const $CLASSNAME &other);
    ~$CLASSNAME();

private:

};

#endif // $GUARD
EOF
    echo "Created $HEADERFILE"
fi

# Create source file
if [ -e "$SOURCEFILE" ]; then
    echo "$SOURCEFILE already exists, skipping..."
else
    cat <<EOF > "$SOURCEFILE"
#include "${HEADERFILE}"

$CLASSNAME::$CLASSNAME() {
    std::cout << "$CLASSNAME constructed" << std::endl;
}

$CLASSNAME::$CLASSNAME(const $CLASSNAME &other) {
    std::cout << "$CLASSNAME copied" << std::endl;
    *this = other;
}

$CLASSNAME &$CLASSNAME::operator=(const $CLASSNAME &other) {
    std::cout << "$CLASSNAME assigned" << std::endl;
    if (this != &other) {
        // Copy fields here
    }
    return *this;
}

$CLASSNAME::~$CLASSNAME() {
    std::cout << "$CLASSNAME destroyed" << std::endl;
}
EOF
    echo "Created $SOURCEFILE"
fi
