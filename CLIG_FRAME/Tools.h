//------------------------------------------------------------------------
// �t�@�C����: Tools.h
// �@�\: �G�ȋ@�\��񋟂���
//------------------------------------------------------------------------

#pragma once

#include <stdlib.h>
#include <time.h>
#include "Structs.h"
#include "DeclaredValues.h"

/// <summary>
/// ���o�͂������Ă̏������z�����Ă��������̎��Ԃ�ݒ�
/// </summary>
/// <param name="time">���̏z��������������</param>
void SetDeltaTime(int time);

/// <summary>
/// �O��̏z���������̎��Ԃ��擾
/// </summary>
/// <returns>�O��̏z���������̎���</returns>
int GetDeltaTime();

/// <summary>
/// �����ɑO��̏z���������̎��Ԃ��擾
/// </summary>
/// <returns>�����ɑO��̏z���������̎���</returns>
int GetRealDeltaTime();

/// <summary>
/// �O��̏z���Ԃɂ���Ăe�o�r���v�Z�A�o�͂���
/// </summary>
void ShowFPSMT();

/// <summary>
/// ���s�\�v���O�����̃^�C�g����ݒ�
/// </summary>
void InitTitle();

/// <summary>
/// �^�C�g�������
/// </summary>
void CloseTitle();

/// <summary>
/// ����h�m�s�^���l�̌������v�Z����
/// </summary>
/// <param name="value">�v�Z�����������l</param>
/// <returns>���l�̌���</returns>
int GetIntValueBit(int value);

/// <summary>
/// �h�m�s�^�̃��X�g�����o��
/// </summary>
/// <returns>���̃��X�g�̃w�b�h�|�C���^</returns>
QSINGLENODE* CreateQueue();

/// <summary>
/// ���郊�X�g�ɐ��l������
/// </summary>
/// <param name="end">���X�g�̃G���h�|�C���^</param>
/// <param name="data">���ꂽ�����l</param>
/// <returns>�V�����G���h�|�C���^</returns>
QSINGLENODE* EnQueue(QSINGLENODE* end, int data);

/// <summary>
/// ���郊�X�g���琔�l�����o��
/// </summary>
/// <param name="top">���X�g�̃w�b�h�|�C���^</param>
/// <param name="end">���X�g�̃G���h�|�C���^</param>
/// <returns>���o���ꂽ���l</returns>
int DeQueue(QSINGLENODE* top, QSINGLENODE* end);

/// <summary>
/// ����Ȏ�ŗ������ݒ�
/// </summary>
/// <param name="seedNum">��̓��e</param>
void SetRandomBySeed(int seedNum);

/// <summary>
/// ���Ԃŗ������ݒ�
/// </summary>
void SetRandom();

/// <summary>
/// ����͈͂̒��ɐ����^�̗����𐶐�����
/// </summary>
/// <param name="minNum">�͈͂̒��Ɉ�ԏ������l</param>
/// <param name="maxNum">�͈͂̒��Ɉ�ԑ傫���l</param>
/// <returns>�������ꂽ����</returns>
int CreateRandomNumIn(int minNum, int maxNum);

/// <summary>
/// �R���\�[���̐F��ω�������
/// </summary>
/// <param name="color">�������ꂽ�F�̒l�̈��</param>
void ChangeColorInConsole(int color);

/// <summary>
/// �R���\�[���̐F�����Z�b�g
/// </summary>
void ResetColorInConsole();

/// <summary>
/// �t���[�g�^�̒l��傫���ɂ���ăC���g�^�ɕύX����
/// </summary>
/// <param name="value">�ύX���������l</param>
/// <returns>�ύX���ꂽ�̒l</returns>
int RoundFloatToInt(float value);

#ifndef SOUNDBYHAL
/// <summary>
/// �v�`�u�t�@�C�����������̒��ɏ�������
/// </summary>
/// <param name="fname">�����t�@�C����</param>
/// <param name="pMemBites">�������߂�ꂽ�������w���̃|�C���^</param>
/// <param name="pMemBitesWithVol">���ʕt���������߂�ꂽ�������w���̃|�C���^</param>
/// <param name="fileSize">�����t�@�C���̃T�C�Y</param>
void ReadWavFileIntoMemory(const char* fname, BYTE** pMemBites,
    BYTE** pMemBitesWithVol, DWORD* fileSize);
#endif // SOUNDBYHAL
