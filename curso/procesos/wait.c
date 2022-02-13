#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
  int result = fork();

  if(result <0 ){
    printf("Llamada a fork ha fallado\n");
    exit(-1);
  }

  if(result != 0){
    execlp("ps", "ps");
    printf("Ha habido un error\n");
    wait(NULL);
  } else {
    execlp("ls", "ls");
    printf("Ha habido un error\n");
  }
}
