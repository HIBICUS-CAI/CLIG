﻿//------------------------------------------------------------------------
// ファイル名: GameAppStructs.h
// 機能: ミドルウェアみたいな構造体
//------------------------------------------------------------------------

#pragma once

#include "Structs.h"

/// <summary>
/// シーンのカメラ構造体
/// </summary>
struct SCENECAMERA
{
    char CamBuffer[CONSOLE_HEIGHT * CONSOLE_WIDTH];

    POSITION_2D CameraPosition;
    int CameraWidth;
    int CameraHeight;

    SCENECAMERA() {}

    SCENECAMERA(POSITION_2D _pos, int _camWdt, int _camHgt)
    {
        CameraPosition = _pos;
        CameraWidth = _camWdt;
        CameraHeight = _camHgt;
    }

    char* GetCamBuffer()
    {
        return CamBuffer;
    }
};

/// <summary>
/// シーン構造体
/// </summary>
struct SCENENODE
{
    int SceneID;
    char SceneName[50];
    UIOBJECT* BaseUIObj;
    SCENECAMERA Camera;

    SCENENODE() {}

    SCENENODE(const char* _name, UIOBJECT* _baseUIO,
        SCENECAMERA _cam)
    {
        strcpy_s(SceneName, sizeof(SceneName), _name);
        BaseUIObj = _baseUIO;
        Camera = _cam;
    }

    SCENECAMERA* GetCamAddr()
    {
        return &Camera;
    }

    void SetBaseUIO(UIOBJECT* uiObj)
    {
        BaseUIObj = uiObj;
    }

    UIOBJECT* GetBaseUIOAddr()
    {
        return BaseUIObj;
    }

    void WriteStrToCamBuffer(POSITION_2D pos, const char* string)
    {
        int width = GetCamAddr()->CameraWidth;
        int height = GetCamAddr()->CameraHeight;
        char* buffer = GetCamAddr()->GetCamBuffer();
        int startX = pos.posX;
        int startY = pos.posY;
        int strLen = strlen(string);

        if (startY < height && startY >= 0)
        {
            for (int i = 0; i < strLen; i++)
            {
                if ((startX + i) >= 0 && (startX + i) < width)
                {
                    *(buffer + startY * width + startX + i) =
                        *(string + i);
                    if (startX < 0 && startX + i < 2 && i % 2)
                    {
                        *(buffer + startY * width + startX + i) = ' ';
                    }
                }
            }
        }
    }
};

/// <summary>
/// 基本な対象者構造体
/// </summary>
struct OBJECT
{
    POSITION_2D Position;
    int Width;
    int Height;
    float ColliRadius;

    int IsCollied(OBJECT obj)
    {
        float distX = ((float)(Width) / 2.f + (float)Position.posX) -
            ((float)(obj.Width) / 2.f + (float)obj.Position.posX);
        float distY = (float)(Height) / 2.f + (float)Position.posY -
            ((float)(obj.Height) / 2.f + (float)obj.Position.posY);

        return (distX * distX + distY * distY <=
            (ColliRadius + obj.ColliRadius) * (ColliRadius + obj.ColliRadius)) ?
            1 : 0;
    }

    int GetDeltaXWith(OBJECT obj)
    {
        int distX = (int)(((float)Width / 2.f + (float)Position.posX) -
            ((float)obj.Width / 2.f + (float)obj.Position.posX));
        return distX;
    }

    int GetDeltaYWith(OBJECT obj)
    {
        int distY = (int)(((float)Height / 2.f + (float)Position.posY) -
            ((float)obj.Height / 2.f + (float)obj.Position.posY));
        return distY;
    }
};

#define MAXSIZE_PER_SPRITE_FRAME 60
/// <summary>
/// 複数ありスプライトの集合体
/// </summary>
struct SPRITE_ANIME
{
    SPRITE SubSprites[MAXSIZE_PER_SPRITE_FRAME];

    SPRITE_ANIME()
    {
        for (int i = 0; i < MAXSIZE_PER_SPRITE_FRAME; i++)
        {
            SubSprites[i] = SPRITE();
        }
    }

    void SetSubSpriteByOffset(SPRITE subSprite, int offset)
    {
        SubSprites[offset] = subSprite;
    }

    SPRITE* GetSubSpriteByOffset(int offset)
    {
        return SubSprites + offset;
    }
};

