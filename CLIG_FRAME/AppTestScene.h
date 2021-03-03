//------------------------------------------------------------------------
// ファイル名: AppTestScene.h
// 機能: テスト用シーンに関しての声明
//------------------------------------------------------------------------

#pragma once

#include "SceneNode.h"

void InitTestScene()
{
    CreateSceneNode(SCENENODE("test", NULL,
        SCENECAMERA(POSITION_2D(1, 1), CONSOLE_WIDTH - 2, CONSOLE_HEIGHT - 2)));
    GetSceneNodeByName("test")->SetBaseUIO(
#ifdef SHOW_SAMPLE_UIOBJECT
        GetUIObjByName("sample"));
#else
        GetUIObjByName("empty"));
#endif // SHOW_SAMPLE_UIOBJECT
}

void UpdateTestScene()
{
    ClearSceneCamBuffer(GetSceneNodeByName("test"));
}

void TurnOffTestScene()
{

}
