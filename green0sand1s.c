#include <stdio.h>
#include <windows.h>   //omar, if ur reading this u can go fuck yourself
#define g "\033[32m"   //cool right?
int randomInRange(int min, int max) {
    return min + rand() % (max - min + 1);  //basically random with a min and max
}
 int main () {
int ranV;
PlaySound("5909046104967616754.wav",NULL,SND_ASYNC | SND_LOOP | SND_FILENAME); //modify the file path to whatever u please lil nigger
while (1==1) {  //made by ilyesPR
ranV = randomInRange(0,1);
printf(g"%i",ranV);  //the g simply makes the color green
 }
 }
