﻿//------------------------------------------------------------------------
// ファイル名: AppDeclared.h
// 機能: 拡張要素に関しての値の声明
//------------------------------------------------------------------------

#pragma once
#include "GameAppStructs.h"
#include "SoundManager.h"

#define SCENENODESIZE 20

#define SHOW_TEST1_SUB 0x0003
#define SHOW_TEST2_SUB 0x0004
#define SHOW_TEST3_SUB 0x0005
#define SHOW_TEST4_SUB 0x0006
#define CLOSE_TEST1_SUB 0x0007
#define CLOSE_TEST2_SUB 0x0008
#define CLOSE_TEST3_SUB 0x0009
#define CLOSE_TEST4_SUB 0x000a

/// <summary>
/// シーン配列を取得
/// </summary>
/// <returns>シーン配列</returns>
SCENENODE* GetSceneNodeArray();

/// <summary>
/// シーン配列を設定
/// </summary>
/// <param name="index">シーンの偏移量</param>
/// <param name="temp">臨時的なシーン声明</param>
void SetSceneNodeArray(int index, SCENENODE temp);

/// <summary>
/// 使っているシーンを設定
/// </summary>
/// <param name="sceneNode">シーン指向のポインタ</param>
void SetCurrScene(SCENENODE* sceneNode);

/// <summary>
/// 使っているシーンを取得
/// </summary>
/// <returns>シーン指向のポインタ</returns>
SCENENODE* GetCurrScene();

