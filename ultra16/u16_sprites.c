#include <citro2d.h>
#include "ultra16.h"
C2D_SpriteSheet U16_Sheets[16];

void U16_SpriteVBL(){
    for(u8 i =0; i < 127; i ++){
        //C2D_DrawSpriteTinted(&(U16_Info.Sprites[i].Sprite),&(U16_Info.Sprites[i].Tint));
        C2D_DrawSprite(&(U16_Info.Sprites[i].Sprite));
    }
}
void U16_SpriteLoadFromSheet(u8 SpriteID,u8 SheetID,u32 Frame){
    if(U16_Info.Sheets[SheetID].Enabled==true) C2D_SpriteFromSheet(&U16_Info.Sprites[SpriteID].Sprite,
    U16_Info.Sheets[SheetID].Sheet,
    Frame);
}
void U16_SpriteSheetLoad(u8 SheetID,char* filename){
    U16_Info.Sheets[SheetID].Sheet=C2D_SpriteSheetLoad(filename);
    U16_Info.Sheets[SheetID].Enabled=true;
}