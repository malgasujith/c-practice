//   void pointer

  # include <stdio.h>
  int main(){
    void * vp;
    int a=10;
    char b = 's';
    float c = 2.05;
    vp =  &a;
    printf("%d",*(int*)vp);
    vp =&b;
    printf('%d',*(char*)vp);
    vp = &c;
    printf("%d",*(float*)vp);
  }  
