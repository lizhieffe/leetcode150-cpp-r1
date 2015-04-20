cmake_minimum_required(VERSION 3.1)
project(leetcode150_cpp_r1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(leetcode150_cpp_r1 ${SOURCE_FILES} SingleNumber.cpp SingleNumber.h MaxDepthOfBinaryTree.h MaxDepthOfBinaryTree.cpp MaxDepthOfBinaryTree.h utils/TreeNode.cpp utils/TreeNode.h SameTree.cpp SameTree.h ClimbingStairs.cpp ClimbingStairs.h GreyCode.cpp GreyCode.h BinaryTreeInorderTraversal.cpp BinaryTreeInorderTraversal.h BinaryTreeInorderTraversalIterative.cpp BinaryTreeInorderTraversalIterative.h ReverseBits.cpp ReverseBits.h FindPeakElement.cpp FindPeakElement.h BinarySearchTreeIterator.cpp BinarySearchTreeIterator.h HouseRobber.cpp HouseRobber.h GasStation.cpp GasStation.h LengthOfLastWord.cpp LengthOfLastWord.h RemoveDuplicatesFromSortedArray.cpp RemoveDuplicatesFromSortedArray.h Permutation.cpp Permutation.h)