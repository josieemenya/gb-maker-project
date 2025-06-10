#include <gb/gb.h>
#include <gb/sgb.h>
#include <gbdk/console.h>

#include <stdint.h>
#include <stdio.h>
#include "../assets/tsetBones.c"



int main(void){
    
    set_sprite_data(0, 16, tsetBones);
    set_sprite_tile(2, 3);
    move_sprite(0, TSETBONES_HEIGHT/2, TSETBONES_WIDTH/2);
    SHOW_SPRITES;
    
    return 0;
}