#include <stdio.h>
#include <stdlib.h>

int main() { 

    int secIn , sec, hour, min , remainsecForMin; 

    printf("Enter sec: "); 
    scanf("%d", &secIn); 

    hour = secIn/3600; 
    remainsecForMin = secIn%3600;
    min = remainsecForMin/60; 
    sec = remainsecForMin%60;
    
    printf("%02d:%02d:%02d \n",   hour, min, sec);

    return 0 ; 
}