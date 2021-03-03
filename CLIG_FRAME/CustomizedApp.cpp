#include "CustomizedApp.h"
#include "SceneNode.h"
#include "SceneManager.h"
#include "SpriteAnimator.h"
#include "SoundManager.h"
#include "UIObjDeclarer.h"
#include "AppBtnEvent.h"
#include "Tools.h"

void AppInit()
{
    CreateAllUIObjs();
    InitSceneNodes();

    SwitchSceneToName("test");
}

void AppUpdate()
{
    UpdateCurrScene();

    switch (GetSceneFlag())
    {
    case TESTSCENEFLAG:
    {
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
        break;
    }

    default:
        break;
    }

    DrawScene(GetManagedCurrScene());
}

void AppTurnOff()
{

}

void AppPostPrint()
{

}

void AppKeyboardEvent(int keyCode)
{

}

void AppButtonEvent(int value)
{
    switch (GetSceneFlag())
    {
    case TESTSCENEFLAG:
        RunButtonEventInTestScene(value);
        break;

    default:
        break;
    }
}
