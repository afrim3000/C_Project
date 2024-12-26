#include <stdio.h>
<<<<<<< Updated upstream
<<<<<<< Updated upstream
void main(){
    printf("Afrim");
=======
=======
>>>>>>> Stashed changes


int main(){
     int arr[5] = {1,2,3,4,5};
     int rev_arr[5]; 
     int l_start = 4;
     for(int i = 0; i <5;i++){
          rev_arr[i] = arr[l_start];
          l_start -=1;
     }

     printf("orz_arr: ");
     for(int i = 0; i<5; i++){
          printf("%d ",arr[i]);
     }

     printf("\n");

     printf("rev_arr: ");
     for(int i = 0; i<5; i++){
          printf("%d ",rev_arr[i]);
     }
<<<<<<< Updated upstream
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes
}