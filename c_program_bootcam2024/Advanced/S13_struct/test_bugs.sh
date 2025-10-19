#!/bin/bash

echo "=== Testing NULL pointer bugs ==="

# Simulate malloc failure by setting size to a huge number
# This might not always work, so here's a logical test:

echo -e "\n1. Test with size 0:"
echo "0" | ./13_135-1_structDynamicAllocArr 2>&1 || echo "Program crashed or exited with error"

echo -e "\n2. Test with invalid input:"
echo "abc" | ./13_135-1_structDynamicAllocArr 2>&1 || echo "Program crashed or exited with error"

echo -e "\n=== These tests show your program doesn't handle errors properly ==="
