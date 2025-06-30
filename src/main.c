#include <gb/gb.h>
#include <gb/sgb.h>
#include <gbdk/console.h>

#include <stdint.h>
#include <stdio.h>
#include "../assets/tset_map.h"



int main(void){

    SHOW_BKG;
    DISPLAY_ON;

    set_bkg_data(0, tset_map_TILE_COUNT, tset_map_tiles);
    set_bkg_tiles(0, 0, 20, 18, tset_map_map);
    
    set_bkg_palette(0, 1, tset_map_palettes); // make sure you have this or it'll just appear like a blank screen


    while(1) {
        wait_vbl_done();
    }

    //return 0;
}