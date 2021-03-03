#include "SceneManager.h"
#include "SceneNode.h"
#include "DeclaredValues.h"
#include "AppDeclared.h"
#include "AppTestScene.h"

int g_SceneFlag;

void SetSceneFlag(int flag)
{
    g_SceneFlag = flag;
}

int GetSceneFlag()
{
    return g_SceneFlag;
}

void SetManagedCurrScene(SCENENODE* sceneNode)
{
    SetCurrScene(sceneNode);
}

SCENENODE* GetManagedCurrScene()
{
    return GetCurrScene();
}

void InitCurrScene()
{
    if (!strcmp(GetManagedCurrScene()->SceneName, "test"))
    {
        SetSceneFlag(TESTSCENEFLAG);
    }
    switch (GetSceneFlag())
    {
    case TESTSCENEFLAG:
        SetManagedCurrScene(GetSceneNodeByName("test"));
        SetSelectedBtn(GetSceneNodeByName("test")->
            BaseUIObj->Buttons);
        break;

    default:
        break;
    }
}

void UpdateCurrScene()
{
    switch (GetSceneFlag())
    {
    case TESTSCENEFLAG:
        UpdateTestScene();
        break;

    default:
        ErrorLogI1("you don't have a scene flag witch is", GetSceneFlag());
        break;
    }
}

void SwitchSceneToName(const char* sceneName)
{
    SCENENODE* scene = GetSceneNodeByName(sceneName);
    if (scene == NULL)
    {
        if (!strcmp(sceneName, "test"))
        {
            InitTestScene();
        }

        scene = GetSceneNodeByName(sceneName);
    }
    SetManagedCurrScene(scene);
    InitCurrScene();
}
