#include <gb/gb.h>
#include <gb/sgb.h>
#include <gbdk/console.h>

#include <stdint.h>
#include <stdio.h>
#include "../assets/tsetBones.c"



int main(void){

    set_sprite_data(0, 16, tsetBones);
    set_sprite_tile(0, 3); // use tile 3
    move_sprite(0, 80, 72); // visible position

    SHOW_SPRITES;
    DISPLAY_ON;

    while(1) {
        wait_vbl_done();
    }
    return 0;
}