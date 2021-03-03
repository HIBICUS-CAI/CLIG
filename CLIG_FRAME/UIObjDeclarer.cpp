#include "UIObjDeclarer.h"
#include "AppDeclared.h"

void CreateAllUIObjs()
{
    CreateEmptyUIObjs();
}

void CreateEmptyUIObjs()
{
#ifdef SHOW_SAMPLE_UIOBJECT
    CreateUIO("sample", POSITION_2D(70, 40), 40, 15,
        UIO_DESIGN::STRAIGHT, NULL, NULL, 1);
    GetUIObjByName("sample")->AddText(
        UI_TEXT(
            POSITION_2D(4, 2),
            (char*)"    Select button by IJKL key"
        )
    );
    GetUIObjByName("sample")->AddText(
        UI_TEXT(
            POSITION_2D(4, 3),
            (char*)"in english input mode"
        )
    );
    GetUIObjByName("sample")->AddText(
        UI_TEXT(
            POSITION_2D(4, 4),
            (char*)"without caps lock"
        )
    );
    GetUIObjByName("sample")->AddText(
        UI_TEXT(
            POSITION_2D(4, 6),
            (char*)"    Run button by SPACE key"
        )
    );
    GetUIObjByName("sample")->AddText(
        UI_TEXT(
            POSITION_2D(4, 7),
            (char*)"with the same condition as select"
        )
    );
    GetUIObjByName("sample")->AddBtn(
        UI_BUTTON(SHOW_TEST1_SUB, POSITION_2D(8, 10),
            (char*)"test1", BTN_DESIGN::LINE));
    GetUIObjByName("sample")->AddBtn(
        UI_BUTTON(SHOW_TEST2_SUB, POSITION_2D(28, 10),
            (char*)"test2", BTN_DESIGN::LINE));
    GetUIObjByName("sample")->AddBtn(
        UI_BUTTON(SHOW_TEST3_SUB, POSITION_2D(8, 12),
            (char*)"test3", BTN_DESIGN::LINE));
    GetUIObjByName("sample")->AddBtn(
        UI_BUTTON(SHOW_TEST4_SUB, POSITION_2D(28, 12),
            (char*)"test4", BTN_DESIGN::LINE));

    CreateUIO("test1", POSITION_2D(80, 30), 20, 20,
        UIO_DESIGN::STRAIGHT, NULL, NULL, 1);
    GetUIObjByName("test1")->AddText(
        UI_TEXT(
            POSITION_2D(2, 3),
            (char*)"this is a sub ui"
        )
    );
    GetUIObjByName("test1")->AddText(
        UI_TEXT(
            POSITION_2D(2, 4),
            (char*)"with name test1"
        )
    );
    GetUIObjByName("test1")->AddBtn(
        UI_BUTTON(CLOSE_TEST1_SUB, POSITION_2D(8, 15),
            (char*)"back", BTN_DESIGN::LINE));

    CreateUIO("test2", POSITION_2D(22, 20), 30, 10,
        UIO_DESIGN::STRAIGHT, NULL, NULL, 1);
    GetUIObjByName("test2")->AddText(
        UI_TEXT(
            POSITION_2D(7, 2),
            (char*)"this is a sub ui"
        )
    );
    GetUIObjByName("test2")->AddText(
        UI_TEXT(
            POSITION_2D(7, 3),
            (char*)"with name test2"
        )
    );
    GetUIObjByName("test2")->AddBtn(
        UI_BUTTON(CLOSE_TEST2_SUB, POSITION_2D(13, 6),
            (char*)"back", BTN_DESIGN::STRAIGHT));

    CreateUIO("test3", POSITION_2D(75, 20), 30, 10,
        UIO_DESIGN::NOTHING, NULL, NULL, 1);
    GetUIObjByName("test3")->AddText(
        UI_TEXT(
            POSITION_2D(7, 2),
            (char*)"this is a sub ui"
        )
    );
    GetUIObjByName("test3")->AddText(
        UI_TEXT(
            POSITION_2D(7, 3),
            (char*)"with name test3"
        )
    );
    GetUIObjByName("test3")->AddBtn(
        UI_BUTTON(CLOSE_TEST3_SUB, POSITION_2D(13, 6),
            (char*)"back", BTN_DESIGN::LINE));

    CreateUIO("test4", POSITION_2D(127, 20), 30, 10,
        UIO_DESIGN::STAR, NULL, NULL, 1);
    GetUIObjByName("test4")->AddText(
        UI_TEXT(
            POSITION_2D(7, 2),
            (char*)"this is a sub ui"
        )
    );
    GetUIObjByName("test4")->AddText(
        UI_TEXT(
            POSITION_2D(7, 3),
            (char*)"with name test4"
        )
    );
    GetUIObjByName("test4")->AddText(
        UI_TEXT(
            POSITION_2D(2, 5),
            (char*)"here's a unvisible botton"
        )
    );
    GetUIObjByName("test4")->AddText(
        UI_TEXT(
            POSITION_2D(2, 6),
            (char*)"press space key to return"
        )
    );
    GetUIObjByName("test4")->AddBtn(
        UI_BUTTON(CLOSE_TEST4_SUB, POSITION_2D(13, 6),
            (char*)"", BTN_DESIGN::NONE));
#else
    CreateUIO("empty", POSITION_2D(0, 0), 0, 0, UIO_DESIGN::NOTHING);
    GetUIObjByName("empty")->AddBtn(
        UI_BUTTON(0, POSITION_2D(0, 0),
            (char*)"", BTN_DESIGN::NONE));
#endif // SHOW_SAMPLE_UIOBJECT
}

