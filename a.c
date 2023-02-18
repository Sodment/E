#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int b(int low,int high,int val){
    return low < val && val < high;
}

int bi(int low,int high,int val){
    return low <= val && val <= high;
}

int main(int argc, char** argv){
    if (argc <3){
        printf_s("Usage a [height of your a, width of your a]");
        return 0;
    }
    
    int height = atoi(argv[1]);
    int width = atoi(argv[2]);
    
    if (height <0 || width <0){
        printf_s("Crime: negative dimention A\nPunishment: seg fault\n");
            *(int*) 0 = 'A'; 
    }
    int middle = (3*height)/5;
    int width_2 = width/2; 

    for(int y=0; y < height; y++){
        for(int x=0;x<height*2;x++){
            if(bi(height-y,height+y,x)){ // Inside triangle
                if(bi(middle - width_2 +(1- width%2) ,middle + width_2,y)){ //A's mid-line 
                    printf_s("A");
                }
                else{
                    if(bi(height-y+width,height+y-width,x)){ //Inside triange + line width
                        printf_s(" ");
                    }else{
                        printf_s("A");
                    }
                }
            }else{
                printf_s(" ");
            }
        }
        printf_s("\n");
    }
    return 0;
}
