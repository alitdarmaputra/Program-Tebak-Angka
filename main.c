#include <stdio.h>
#include <stdlib.h>

int main (){
  time_t t;
  int guess_num, user_num;

  srand((unsigned) time(&t));
  guess_num = rand() % 30;
  printf("%d\n", guess_num);
  printf("--- Program Tebak Angka ---\n");
  printf("tekan <enter> untuk melanjutkan...\n");
  getch();
  printf("Anda hanya memiliki kesempatan menebak 3x\n");
  for(int i = 0; i<3; i++){
    printf("Tebakan ke-%d :", i+1);
    scanf("%d", &user_num);
    if(user_num == guess_num){
      printf("Tebakkan anda benar\n");
      break;
    }else if(user_num > guess_num){
      printf("Angka yang ditebak kurang dari tebakan anda\n");
    }else if(user_num < guess_num){
      printf("Angka yang ditebak lebih dari tebakan anda\n");
    }
  }
  return 0;
}
