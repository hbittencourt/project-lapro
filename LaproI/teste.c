#include<curses.h>
#include<stdio.h>

int main(){
int mx, my;
getmaxyx(stdscr, my, mx);
printf("%d , %d", mx, my);
return 0;
}
