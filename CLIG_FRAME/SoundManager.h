//------------------------------------------------------------------------
// �t�@�C����: SoundManager.h
// �@�\: �����Ɋւ��Ă̋@�\��񋟂���
//------------------------------------------------------------------------

#pragma once

#include "Structs.h"

//#define NOTSOUND

/// <summary>
/// �����V�X�e��������������
/// </summary>
void InitSoundSys();

/// <summary>
/// �t�@�C���������z��ɏ�������
/// </summary>
/// <param name="fileName">�t�@�C����</param>
/// <param name="soundName">�����ɕt���������O</param>
/// <param name="isAlwaysNeed">��Ɏg�p����邩�ǂ���</param>
void LoadSound(const char* fileName, const char* soundName,
    int isAlwaysNeed = 0);

#ifdef SOUNDBYHAL
/// <summary>
/// ���O�ŉ������擾
/// </summary>
/// <param name="soundName">�����ɕt�������O</param>
/// <returns>�����w���̃|�C���^</returns>
SOUNDFILE_LOADED* GetSoundFile(const char* soundName);
#else
/// <summary>
/// ���O�ŉ������擾
/// </summary>
/// <param name="soundName">�����ɕt�������O</param>
/// <returns>�����w���̃|�C���^</returns>
SOUNDFILE_IN_MEMBITE* GetSoundFile(const char* soundName);
#endif // SOUNDBYHAL

#ifdef SOUNDBYHAL
/// <summary>
/// �����̉��ʕύX
/// </summary>
/// <param name="soundName">�����ɕt�������O</param>
/// <param name="vol">�ݒu������������</param>
void ChangeSoundFileVolume(const char* soundName, int vol);
#else
/// <summary>
/// �����̉��ʕύX
/// </summary>
/// <param name="soundName">�����ɕt�������O</param>
/// <param name="vol">�ݒu������������</param>
void ChangeSoundFileVolume(const char* soundName, float vol);
#endif // SOUNDBYHAL

#ifdef SOUNDBYHAL
/// <summary>
/// �����̉��ʕύX
/// </summary>
/// <param name="sound">�����Ɏw���̃|�C���^</param>
/// <param name="vol">�ݒu������������</param>
void ChangeSoundFileVolume(SOUNDFILE_LOADED* sound, int vol);
#else
/// <summary>
/// �����̉��ʕύX
/// </summary>
/// <param name="sound">�����Ɏw���̃|�C���^</param>
/// <param name="vol">�ݒu������������</param>
void ChangeSoundFileVolume(SOUNDFILE_IN_MEMBITE* sound, float vol);
#endif // SOUNDBYHAL

#ifdef SOUNDBYHAL
/// <summary>
/// �w�i���y���Đ�����
/// </summary>
/// <param name="sound">�����Ɏw���̃|�C���^</param>
void PlayBackgroundMusic(SOUNDFILE_LOADED* sound);
#else
/// <summary>
/// �w�i���y���Đ�����
/// </summary>
/// <param name="sound">�����Ɏw���̃|�C���^</param>
void PlayBackgroundMusic(SOUNDFILE_IN_MEMBITE* sound);
#endif // SOUNDBYHAL

#ifdef SOUNDBYHAL
/// <summary>
/// ���ʉ����Đ�����
/// </summary>
/// <param name="sound">�����Ɏw���̃|�C���^</param>
void PlayEffectSound(SOUNDFILE_LOADED* sound);
#else
/// <summary>
/// ���ʉ����Đ�����
/// </summary>
/// <param name="sound">�����Ɏw���̃|�C���^</param>
void PlayEffectSound(SOUNDFILE_IN_MEMBITE* sound);
#endif // SOUNDBYHAL


#ifndef SOUNDBYHAL
/// <summary>
/// ���鉹������x�����Đ�����
/// </summary>
/// <param name="sound">�����Ɏw���̃|�C���^</param>
void PlaySingleSoundOnce(SOUNDFILE_IN_MEMBITE* sound);
#endif // !SOUNDBYHAL

#ifdef SOUNDBYHAL
/// <summary>
/// �������A���C���X�g�[������
/// </summary>
/// <param name="sound">�����Ɏw���̃|�C���^</param>
void UninstallSound(SOUNDFILE_LOADED* sound);
#else
/// <summary>
/// �������A���C���X�g�[������
/// </summary>
/// <param name="sound">�����Ɏw���̃|�C���^</param>
void UninstallSound(SOUNDFILE_IN_MEMBITE* sound);
#endif // SOUNDBYHAL

/// <summary>
/// ���[�h���ꂽ�����̍Đ��󋵊m��
/// </summary>
void CheckAllSoundHasEnded();

/// <summary>
/// �����V�X�e�������
/// </summary>
void TurnOffSoundSys();
