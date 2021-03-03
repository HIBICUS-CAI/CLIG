#include "AppBtnEvent.h"
#include "GameAppStructs.h"
#include "AppDeclared.h"
#include "UIObject.h"
#include "Tools.h"
#include "DeclaredValues.h"
#include "SceneManager.h"
#include "SoundManager.h"
#include "SceneNode.h"

void RunButtonEventInTestScene(int value)
{
#ifdef SHOW_SAMPLE_UIOBJECT
    if (value == SHOW_TEST1_SUB)
    {
        UIOBJECT* tempUIO = GetUIObjByName("test1");
        if (tempUIO != NULL)
        {
            GetUIObjByName("sample")->AddChild(tempUIO);
            tempUIO->AddParent(GetUIObjByName("sample"));
            tempUIO->TurnOn();
            SetSelectedBtn(tempUIO->Buttons);
        }
        else
        {
            ErrorLog("cannot find this ui object");
        }
    }
    else if (value == SHOW_TEST2_SUB)
    {
        UIOBJECT* tempUIO = GetUIObjByName("test2");
        if (tempUIO != NULL)
        {
            GetUIObjByName("sample")->AddChild(tempUIO);
            tempUIO->AddParent(GetUIObjByName("sample"));
            tempUIO->TurnOn();
            SetSelectedBtn(tempUIO->Buttons);
        }
        else
        {
            ErrorLog("cannot find this ui object");
        }
    }
    else if (value == SHOW_TEST3_SUB)
    {
        UIOBJECT* tempUIO = GetUIObjByName("test3");
        if (tempUIO != NULL)
        {
            GetUIObjByName("sample")->AddChild(tempUIO);
            tempUIO->AddParent(GetUIObjByName("sample"));
            tempUIO->TurnOn();
            SetSelectedBtn(tempUIO->Buttons);
        }
        else
        {
            ErrorLog("cannot find this ui object");
        }
    }
    else if (value == SHOW_TEST4_SUB)
    {
        UIOBJECT* tempUIO = GetUIObjByName("test4");
        if (tempUIO != NULL)
        {
            GetUIObjByName("sample")->AddChild(tempUIO);
            tempUIO->AddParent(GetUIObjByName("sample"));
            tempUIO->TurnOn();
            SetSelectedBtn(tempUIO->Buttons);
        }
        else
        {
            ErrorLog("cannot find this ui object");
        }
    }
    else if (value == CLOSE_TEST1_SUB)
    {
        UIOBJECT* tempUIO = GetUIObjByName("test1");
        if (tempUIO != NULL)
        {
            tempUIO->TurnOff();
            SetSelectedBtn(tempUIO->ParentUIO->Buttons + 0);
        }
        else
        {
            ErrorLog("cannot find this ui object");
        }
    }
    else if (value == CLOSE_TEST2_SUB)
    {
        UIOBJECT* tempUIO = GetUIObjByName("test2");
        if (tempUIO != NULL)
        {
            tempUIO->TurnOff();
            SetSelectedBtn(tempUIO->ParentUIO->Buttons + 1);
        }
        else
        {
            ErrorLog("cannot find this ui object");
        }
    }
    else if (value == CLOSE_TEST3_SUB)
    {
        UIOBJECT* tempUIO = GetUIObjByName("test3");
        if (tempUIO != NULL)
        {
            tempUIO->TurnOff();
            SetSelectedBtn(tempUIO->ParentUIO->Buttons + 2);
        }
        else
        {
            ErrorLog("cannot find this ui object");
        }
    }
    else if (value == CLOSE_TEST4_SUB)
    {
        UIOBJECT* tempUIO = GetUIObjByName("test4");
        if (tempUIO != NULL)
        {
            tempUIO->TurnOff();
            SetSelectedBtn(tempUIO->ParentUIO->Buttons + 3);
        }
        else
        {
            ErrorLog("cannot find this ui object");
        }
    }
    else
    {
        ErrorLogI1("you cannot run this event: ", value);
    }
#endif // SHOW_SAMPLE_UIOBJECT
}
