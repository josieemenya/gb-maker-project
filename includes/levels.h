#ifndef LEVELS_H_
#define LEVELS_H_

#include <gb/gb.h>
#include <gb/sgb.h>
#include <gbdk/console.h>

#include <stdint.h>
#include <stdio.h>


typedef enum {

    Tutorial = 0,
    Level_One = 1,
    Level_Two,
    LevelCount
} CurrentLevel;


CurrentLevel NextLevel(CurrentLevel x){
    return CurrentLevel((x + 1) % LevelCount);
}



#endif 