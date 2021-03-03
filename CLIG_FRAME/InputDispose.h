//------------------------------------------------------------------------
// �t�@�C����: UIObject.h
// �@�\: �t�h�A�C�e���Ɋւ��Ă̏���
//------------------------------------------------------------------------

#pragma once

#include <conio.h>
#include <windows.h>
#include "Structs.h"

/// <summary>
/// ���̓V�X�e��������������
/// </summary>
void InitInputQueue();

/// <summary>
/// ���̓��X�g���쐬
/// </summary>
/// <returns>�h�m�s�^���X�g�̍\���̃|�C���^</returns>
QUEUE_INT* CreateInputQueue();

/// <summary>
/// ���̓V�X�e�����s
/// </summary>
void Input();

/// <summary>
/// �����ꂽ�L�[�{�[�h�̃{�^�������
/// </summary>
void InsertInput();

/// <summary>
/// �}���`�X���b�h�ŉ����ꂽ�L�[�{�[�h�̃{�^�������
/// </summary>
void InsertInputMT();

/// <summary>
/// ���̓V�X�e�����g���Ă���X���b�h�����
/// </summary>
void TurnOffMTInput();

/// <summary>
/// ���ꂽ�{�^������������
/// </summary>
void DisposeInput();

/// <summary>
/// �{�^���̒l�ɂ���ċ@�\�����s
/// </summary>
/// <param name="keyCode">���̓��X�g������o�����l</param>
void DispatchInput(int keyCode);

/// <summary>
/// ���̓��X�g���擾
/// </summary>
/// <returns>���̓��X�g�w���̃|�C���^</returns>
QUEUE_INT* GetInputQueue();
