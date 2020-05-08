#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]){
  if(argc<2)
  {
    printf(1,"butuh argumen [path destination]\n"); 
    exit();
  }  
  
  if(chdir(argv[1])<0) //menjalankan cd
  {
    printf(1,"gagal untuk berpindah direktori\n"); 
  }
  
  exit();
}






