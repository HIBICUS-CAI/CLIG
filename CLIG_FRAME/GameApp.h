//------------------------------------------------------------------------
// �t�@�C����: GameApp.h
// �@�\: �Q�[���̊�{�z��
//------------------------------------------------------------------------

#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include "Structs.h"

/// <summary>
/// �Q�[�����K�v�Ȃ��̂�S������������
/// </summary>
/// <returns>�������ǂ���������</returns>
int Init();

/// <summary>
/// �Q�[�������s����
/// </summary>
void RunGame();

/// <summary>
/// �Q�[�������
/// </summary>
void TurnOff();

/// <summary>
/// �Q�[���̗v�f���X�V����
/// </summary>
void Update();

/// <summary>
/// �o�͗p�o�b�t�@�𕶎��z��̂悤�ɏo�͂���
/// </summary>
void Draw();
