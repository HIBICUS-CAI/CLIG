//------------------------------------------------------------------------
// �t�@�C����: DeclaredValues.h
// �@�\: ����ȃO���[�o���ϐ��𐺖�����
//------------------------------------------------------------------------

#pragma once

#include "DefinedValues.h"
#include "Structs.h"

/// <summary>
/// �Q�[���������邩�ǂ�����ݒ�
/// </summary>
/// <param name="value">�O�Ȃ�Q�[���������Ȃ�</param>
void SetGameRunFlag(int value);

/// <summary>
/// �Q�[���������邩�ǂ������擾
/// </summary>
/// <returns>������̂��邵</returns>
int GetGameRunFlag();

#define DELTATIME 16

/// <summary>
/// �ݒ肳�ꂽ�t���[�����Ԃ��擾
/// </summary>
/// <returns>�ݒ肳�ꂽ�t���[������</returns>
int GetDeclaredDeltaTime();

/// <summary>
/// �t���[�����Ԃ�ݒ肷��
/// </summary>
/// <param name="value">�t���[������</param>
void SetDeclaredDeltaTime(int value);

/// <summary>
/// �o�̓n���h�����擾
/// </summary>
/// <returns>�o�͐���n���h��</returns>
HANDLE GetPrintHandle();

/// <summary>
/// �o�̓n���h����ݒ�
/// </summary>
/// <param name="handle">�o�͐���n���h��</param>
void SetPrintHandle(HANDLE handle);

/// <summary>
/// �X�V�p�o�b�t�@�Əo�͗p�o�b�t�@������
/// </summary>
void SwapPrintChain();

/// <summary>
/// �X�V�p�o�b�t�@���擾
/// </summary>
/// <returns>�X�V�p�o�b�t�@�Ɏw���̃|�C���^</returns>
char* GetOutputBufferToUpdate();

/// <summary>
/// �o�͗p�o�b�t�@���擾
/// </summary>
/// <returns>�o�͗p�o�b�t�@�Ɏw���̃|�C���^</returns>
char* GetOutputBufferToPrint();

#define UIOBJSIZE 32

/// <summary>
/// �t�h�A�C�e���z����擾
/// </summary>
/// <returns>�t�h�A�C�e���z��̃w�b�h�|�C���^</returns>
UIOBJECT* GetUIObj();

/// <summary>
/// �t�h�A�C�e���z��̌��ݔԍ�
/// </summary>
/// <returns>���݂̔ԍ�</returns>
int* GetUIOIndex();

/// <summary>
/// �t�h�A�C�e���z��̌��ݔԍ���ݒ�
/// </summary>
/// <param name="value">�ԍ��̒l</param>
void SetUIOIndex(int value);

/// <summary>
/// �t�h�A�C�e���z��̌��ݔԍ����P�𑫂�
/// </summary>
void AddUIOIndex();

/// <summary>
/// ���ݍł���K�Ȃt�h�A�C�e�����擾
/// </summary>
/// <returns>�ŏ�K�̂t�h�A�C�e���Ɏw���̃|�C���^</returns>
UIOBJECT* GetTopUIO();

/// <summary>
/// �ŏ�K�̂t�h�A�C�e����ݒ�
/// </summary>
/// <param name="uiObj">�t�h�A�C�e���w���̃|�C���^</param>
void SetTopUIO(UIOBJECT* uiObj);

/// <summary>
/// �o�b�t�@�����p���䐺�����擾
/// </summary>
/// <returns>����p�A�C�e��</returns>
CRITICAL_SECTION* GetSwapChainCS();

/// <summary>
/// ���I�����ꂽ�{�^�����擾
/// </summary>
/// <returns>�I�����ꂽ�{�^���Ɏw���̃|�C���^</returns>
UI_BUTTON* GetSelectedBtn();

/// <summary>
/// �I�������{�^����ݒ�
/// </summary>
/// <param name="btn">�{�^���Ɏw���̃|�C���^</param>
void SetSelectedBtn(UI_BUTTON* btn);

/// <summary>
/// �����I�Ƀ{�^����ݒ肷��L�����擾
/// </summary>
/// <returns>�L���Ɏw���̃|�C���^</returns>
int* GetAutoSelectBtnFlag();

/// <summary>
/// �����I�{�^����ݒ肷��̋L����ݒ�
/// </summary>
/// <param name="value">�L���̒l</param>
void SetAutoSelectBtnFlag(int value);

#define SOUNDFILE_SIZE 64

#ifdef SOUNDBYHAL
/// <summary>
/// �i�[���ꂽ�̉����t�@�C���z����擾
/// </summary>
/// <returns>�i�[���ꂽ�̉����t�@�C���z��w���̃|�C���^</returns>
SOUNDFILE_LOADED* GetSoundFilesInMemBitesArray();
#else
/// <summary>
/// �i�[���ꂽ�̉����t�@�C���z����擾
/// </summary>
/// <returns>�i�[���ꂽ�̉����t�@�C���z��w���̃|�C���^</returns>
SOUNDFILE_IN_MEMBITE* GetSoundFilesInMemBitesArray();
#endif // SOUNDBYHAL

#ifdef SOUNDBYHAL
/// <summary>
/// ���O�ɂ���Ċi�[���ꂽ�̉����t�@�C�����擾
/// </summary>
/// <param name="fileName">�i�[���ꂽ�����t�@�C���̖��O</param>
/// <returns>�i�[���ꂽ�����t�@�C���w���̃|�C���^</returns>
SOUNDFILE_LOADED* GetSoundFilesInMemBites(const char* soundName);
#else
/// <summary>
/// ���O�ɂ���Ċi�[���ꂽ�̉����t�@�C�����擾
/// </summary>
/// <param name="fileName">�i�[���ꂽ�����t�@�C���̖��O</param>
/// <returns>�i�[���ꂽ�����t�@�C���w���̃|�C���^</returns>
SOUNDFILE_IN_MEMBITE* GetSoundFilesInMemBites(const char* fileName);
#endif // SOUNDBYHAL

#ifndef SOUNDBYHAL

#define SOUNDHANDLE_SIZE 8

/// <summary>
/// �����n���h���z����擾
/// </summary>
/// <returns>�����n���h���z��Ɏw���̃|�C���^</returns>
SOUND_THREAD_HANDLE* GetSoundHandleArray();

/// <summary>
/// �g���Ă��Ȃ������n���h�����擾
/// </summary>
/// <returns>�g���Ă��Ȃ������n���h���\���̎w���̃|�C���^</returns>
SOUND_THREAD_HANDLE* GetSoundHandleThatNotUsing();

#endif // !SOUNDBYHAL
