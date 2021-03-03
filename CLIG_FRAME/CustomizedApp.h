//------------------------------------------------------------------------
// �t�@�C����: CustomizedApp.h
// �@�\: �Q�[���̊g���v�f�Ɋւ��Ă̕⊮
//------------------------------------------------------------------------

#pragma once

#include "Structs.h"

/// <summary>
/// �g���v�f������������
/// </summary>
void AppInit();

/// <summary>
/// �g���v�f���X�V����
/// </summary>
void AppUpdate();

/// <summary>
/// �g���v�f�����
/// </summary>
void AppTurnOff();

/// <summary>
/// �g���v�f�̃L�[�{�[�h�C�x���g���s��
/// </summary>
/// <param name="keyCode">�L�[�ԍ�</param>
void AppKeyboardEvent(int keyCode);

/// <summary>
/// �g���v�f�̃{�^���C�x���g���s��
/// </summary>
/// <param name="value">�{�^���ԍ�</param>
void AppButtonEvent(int value);

/// <summary>
/// �g���v�f�𑼂̃G�t�F�N�g�ŏo�͂���
/// </summary>
void AppPostPrint();
