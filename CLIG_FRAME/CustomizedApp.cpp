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
    default:
        break;
    }
}
