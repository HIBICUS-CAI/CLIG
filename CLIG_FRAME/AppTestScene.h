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
        GetUIObjByName("empty"));
}

void UpdateTestScene()
{
    ClearSceneCamBuffer(GetSceneNodeByName("test"));

    char stringTemp[55] = "";
    strcpy_s(stringTemp, sizeof(stringTemp),
        "showing this string in the test scene's camera buffer");
    GetSceneNodeByName("test")->WriteStrToCamBuffer(
        POSITION_2D(
            GetSceneNodeByName("test")->GetCamAddr()->CameraWidth / 2 - strlen(stringTemp) / 2,
            GetSceneNodeByName("test")->GetCamAddr()->CameraHeight / 2
        ),
        stringTemp
    );
}

void TurnOffTestScene()
{

}
