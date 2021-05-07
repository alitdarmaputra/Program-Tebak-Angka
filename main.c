#include <stdio.h>
#include <stdlib.h>

int main (){
  int guess_num, user_num;
  guess_num = rand() % 30;
  printf("--- Program Tebak Angka ---\n");
  printf("tekan <enter> untuk melanjutkan...\n");
  getch();
  printf("Anda hanya memiliki kesempatan menebak 3x\n");
  for(int i = 0; i<3; i++){
    printf("Tebakan ke-%d :", i+1);
    scanf("%d", &user_num);
  }
  return 0;
}
