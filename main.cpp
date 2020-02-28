#include <iostream>

int findSum(int A[], int N){

  if(N <= 0){
    return 0;
  }
  int X = findSum(A, N-1);
  int Y = (A[N-1]);
  std::cout << "X before: " << X;
  std::cout << std::endl << " Y before" << Y << std::endl;
  return findSum(A, N-1) + (A[N-1]);
}
int main() {
int A[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
   /*std::cout << "When N = 0 elements, the SUM is : " << findSum(A, 0) << std::endl;
   std::cout << "When N = 1 elements, the SUM is : " << findSum(A, 1) << std::endl;
   std::cout << "When N = 2 elements, the SUM is : " << findSum(A, 2) << std::endl;
   std::cout << "When N = 3 elements, the SUM is : " << findSum(A, 3) << std::endl;
   std::cout << "When N = 4 elements, the SUM is : " << findSum(A, 4) << std::endl;
   std::cout << "When N = 5 elements, the SUM is : " << findSum(A, 5) << std::endl;
   std::cout << "When N = 6 elements, the SUM is : " << findSum(A, 6) << std::endl;
   std::cout << "When N = 7 elements, the SUM is : " << findSum(A, 7) << std::endl;
   std::cout << "When N = 8 elements, the SUM is : " << findSum(A, 8) << std::endl;*/
   std::cout << "When N = 9 elements, the SUM is : " << findSum(A, 9) << std::endl;
  
}
