#ifndef U16_COMMON_H_INCLUDED
#define U16_COMMON_H_INCLUDED

#include <citro2d.h>
#include <stdbool.h>

typedef struct{
    bool Enabled;
    C2D_SpriteSheet Sheet;
} U16_SheetsTy;
typedef struct{
	C3D_RenderTarget* Top;
	C3D_RenderTarget* Bottom;
}U16_ScreenTy;

typedef struct{
    C2D_Sprite Sprite;
    C2D_ImageTint Tint;
    bool Enabled;
}U16_SpritesTy;

typedef struct{
    U16_ScreenTy Screens;    
    U16_SpritesTy Sprites[128];
    U16_SheetsTy Sheets[16];
}U16_InfoTy;
extern U16_InfoTy U16_Info;
//extern C2D_SpriteSheet U16_Sheets[16];

#endif