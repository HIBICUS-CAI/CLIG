//------------------------------------------------------------------------
// �t�@�C����: UIObject.h
// �@�\: �t�h�A�C�e���Ɋւ��Ă̏���
//------------------------------------------------------------------------

#pragma once

#include <stdlib.h>
#include "DefinedValues.h"
#include "Structs.h"

/// <summary>
/// �t�h�A�C�e���z�������������
/// </summary>
void InitUIObj();

/// <summary>
/// �A�C�e���̔ԍ��ł���t�h�A�C�e�������o��
/// </summary>
/// <param name="id">�~�����t�h�A�C�e���̔ԍ�</param>
/// <returns>�ԍ��ɉ����Ă���t�h�A�C�e��</returns>
UIOBJECT* GetUIObjByID(int id);

/// <summary>
/// �A�C�e���̖��O�ł���t�h�A�C�e�������o��
/// </summary>
/// <param name="name">�~�����t�h�A�C�e���̖��O</param>
/// <returns>���O�ɉ����Ă���t�h�A�C�e��</returns>
UIOBJECT* GetUIObjByName(const char* name);

/// <summary>
/// �t�h�A�C�e�������o��
/// </summary>
/// <param name="name">�A�C�e���̖��O</param>
/// <param name="startPoint">�A�C�e���̎n�_���W</param>
/// <param name="width">�A�C�e���̒���</param>
/// <param name="height">�A�C�e���̍���</param>
/// <param name="design">�A�C�e���g�̃f�U�C��</param>
/// <param name="parent">���̃A�C�e���̐e�A�C�e��</param>
/// <param name="child">���̃A�C�e���̎q�A�C�e��</param>
/// <param name="visiblity">�A�C�e���̉���</param>
/// <returns>��ꂽ�A�C�e���̃|�C���^</returns>
UIOBJECT* CreateUIO(const char* name, POSITION_2D startPoint, int width, int height,
    UIO_DESIGN design, UIOBJECT* parent = NULL, UIOBJECT* child = NULL,
    int visiblity = 0);

/// <summary>
/// �t�h�A�C�e�����X�V�p�o�b�t�@�ɏ�������
/// </summary>
/// <param name="uiObject">�������݂����A�C�e���Ɏw���̃|�C���^</param>
void DrawUIO(UIOBJECT* uiObject);

/// <summary>
/// �A�C�e�����̕������e���X�V�p�o�b�t�@�ɏ�������
/// </summary>
/// <param name="uiObject">�������݂����A�C�e���Ɏw���̃|�C���^</param>
void DrawTextInUIO(UIOBJECT* uiObject);

/// <summary>
/// �A�C�e�����̃{�^�����e���X�V�p�o�b�t�@�ɏ�������
/// </summary>
/// <param name="uiObject">�������݂����A�C�e���Ɏw���̃|�C���^</param>
void DrawBtnInUIO(UIOBJECT* uiObject);
