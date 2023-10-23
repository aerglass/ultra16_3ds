#ifndef U16_SPRITES_H_INCLUDED
#define U16_SPRITES_H_INCLUDED

void U16_SpriteVBL();
void U16_SpriteLoadFromSheet(u8 SpriteID,u8 SheetID,u32 Frame);
void U16_SpriteSheetLoad(u8 SheetID,char* filename);
#endif