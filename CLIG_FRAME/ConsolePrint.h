//------------------------------------------------------------------------
// �t�@�C����: ConsolePrint.h
// �@�\: �o�͗p�o�b�t�@�̓��e���R���\�[���ɏo�͂���
//------------------------------------------------------------------------

#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Structs.h"

/// <summary>
/// �R���\�[���̑傫���ƃo�b�t�@������������
/// </summary>
void InitOutputBuffer();

/// <summary>
/// �O��o�͗p�o�b�t�@�ɏ������񂾓��e��p��
/// </summary>
void ClearOutputBuffer();

/// <summary>
/// �o�͗p�o�b�t�@�̓��e�𕶎��z��̌`�ŏo�͂���
/// </summary>
void PrintOutputBuffer();

/// <summary>
/// �o�͗p�o�b�t�@�ɕK�v�ȍX�V�������s��
/// </summary>
void UpdateOutputBuffer();

#ifdef MY_DEBUG_INFO
/// <summary>
/// �t���[�����[�g��\��������
/// </summary>
void ShowFPSAtScreen();
#endif // SHOWFPS

/// <summary>
/// ����ʒu�ɓ��e�𒼐ڂɏ�������
/// </summary>
/// <param name="position">�������ލ��W</param>
/// <param name="text">�������݂������e</param>
void WriteCharIntoOutputBuffer(POSITION_2D position, const char text);

/// <summary>
/// ����ʒu�ɕ����z����e����������
/// </summary>
/// <param name="startPos">�������ލ��W</param>
/// <param name="text">�������݂��������z��</param>
void WriteStrIntoOutputBufferByPos(POSITION_2D startPos, const char* text);

/// <summary>
/// ����ʒu�ɕ����z��Ɛ��l����������
/// </summary>
/// <param name="startPos">�������ލ��W</param>
/// <param name="text">�������݂��������z��</param>
/// <param name="value">�������݂����l</param>
void WriteStrInt1IntoOutputBufferByPos(POSITION_2D startPos, const char* text, int value);

/// <summary>
/// �o�͐���n���h�������
/// </summary>
void CloseMTPrint();
