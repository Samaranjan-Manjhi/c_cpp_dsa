#!/bin/bash

DIR=$1

if [ -z "$DIR" ]; then
    echo "Usage: $0 <directory_path>"
    exit 1
fi

for cpp_file in "$DIR"/*.cpp
do
    # If no cpp files exist
    [ -e "$cpp_file" ] || continue

    # Get filename without extension
    filename=$(basename "$cpp_file" .cpp)

    # Binary path
    binary="$DIR/$filename"

    # Check binary exists
    if [ -f "$binary" ] && [ -x "$binary" ]; then
        continue
    else
        echo "$cpp_file"
    fi
done
