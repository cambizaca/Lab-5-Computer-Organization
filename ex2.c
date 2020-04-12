#include <stdio.h>

int A[10][10];
int B[10][10];
int C[10][10];
int M;

int recursiveSolve(int x);

int main() {
  scanf("%d", &M);
  for(int i = 0; i < M; i++) {
    for(int k = 0; k < M; k++) {
      scanf("%d",&A[i][k]);
    }
  }
  for(int i = 0; i < M; i++) {
    for(int k = 0; k < M; k++) {
      scanf("%d",&B[i][k]);
    }
  }
//   printf("%d\n",A[1][0]);
//  recursiveSolve(M);

int tot;

for(int i = 0; i < M; i++) {
  for(int q = 0; q < M; q++) {
      for(int k = 0; k < M; k++) {
//      printf("A: %d\n",A[M-1][tempZero]);
//      printf("B: %d\n",B[tempZero][q-1]);
        C[i][q] += A[i][k]*B[k][q];

      }
  //  printf("Val of q: %d\n", q);
  //  printf("Val of M: %d\n", M);
  }


}


  for(int i = 0; i < M; i++) {
    for(int k = 0; k < M; k++) {
      printf("%6d", C[i][k]);
    }
    printf("\n");
  }

}

int recursiveSolve(int x) {
  int arrNum = x - 1;
  if(x > 0) {
  printf("here");
 for(int i = x; i > 0 ; i--) {
    C[i][arrNum] = 0;

    for(int q = x; q > 0; q--) {
      int tempZero = 0;
      for(int k = x; k > 0; k--) {
	printf("A: %d\n",A[arrNum][tempZero]);
	printf("B: %d\n",B[tempZero][q-1]);
	C[arrNum][q-1] += A[arrNum][tempZero]*B[tempZero][q-1];
        tempZero++;
	printf("Coordinates: %d,%d\n", arrNum,q-1);
        printf("%d\n",C[arrNum][q-1]);
      }
    }
  }
    recursiveSolve(x-1);
  } else {
    return 0;
  }
}
