#include <citro2d.h>
#include "ultra16.h"

U16_InfoTy U16_Info;

void U16_Init(){
	romfsInit();
	gfxInitDefault();
	C3D_Init(C3D_DEFAULT_CMDBUF_SIZE);
	C2D_Init(C2D_DEFAULT_MAX_OBJECTS);
	C2D_Prepare();
    U16_Info.Screens.Bottom=C2D_CreateScreenTarget(GFX_BOTTOM, GFX_LEFT);
    U16_Info.Screens.Top=C2D_CreateScreenTarget(GFX_TOP, GFX_LEFT);
}

void U16_StartRender(){
	C3D_FrameBegin(C3D_FRAME_SYNCDRAW);
	C2D_TargetClear(U16_Info.Screens.Top, C2D_Color32f(0, 0, 0, 1.0f));
	C2D_SceneBegin(U16_Info.Screens.Top);
	
}
void U16_VBL(){
    U16_SpriteVBL();
}
void U16_EndRender(){
    C3D_FrameEnd(0);
}

void U16_End(){
    for(u8 i =0; i < 15; i ++) C2D_SpriteSheetFree(U16_Info.Sheets[i].Sheet);
	C2D_Fini();
	C3D_Fini();
	gfxExit();
	romfsExit();
}