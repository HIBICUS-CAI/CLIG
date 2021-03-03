//------------------------------------------------------------------------
// �t�@�C����: SpriteAnimator.h
// �@�\: �X�v���C�g���܂Ƃ߂Ă̊Ǘ��ƍČ�
//------------------------------------------------------------------------
#pragma once

#include "GameAppStructs.h"

/// <summary>
/// ��̃X�v���C�g���쐬
/// </summary>
/// <param name="fileName">�X�v���C�g�L�^���Ă���t�@�C���̖�</param>
/// <param name="position">�X�v���C�g�ʒu�̍��W</param>
/// <param name="width">�X�v���C�g�̒���</param>
/// <param name="height">�X�v���C�g�̍���</param>
/// <returns>���ꂽ�̃X�v���C�g</returns>
SPRITE CreateSingleSprite(const char* fileName, POSITION_2D position, int width, int height);

/// <summary>
/// ��̃X�v���C�g���X�V�p�o�b�t�@�ɏ�������
/// </summary>
/// <param name="sprite">�������݂����X�v���C�g�Ɏw���̃|�C���^</param>
void DrawSingleSpriteToUpdateBuffer(SPRITE* sprite);

/// <summary>
/// ��̃X�v���C�g���J�����o�b�t�@�ɏ�������
/// </summary>
/// <param name="camBuffer">�J�����o�b�t�@�Ɏw���̃|�C���^</param>
/// <param name="sprite">�������݂����X�v���C�g�Ɏw���̃|�C���^</param>
/// <param name="posInCam">�������݂������W</param>
void DrawSingleSpriteToCamBuffer(SCENECAMERA* camBuffer, SPRITE* sprite, POSITION_2D posInCam, int showSpace = 0);

/// <summary>
/// �X�v���C�g�A�j���^�����쐬
/// </summary>
/// <param name="frameCount">�L�[�t���[���̐�</param>
/// <param name="fileName">�X�v���C�g�L�^���Ă���t�@�C���̖�(�ԍ��Ɗg���q����)</param>
/// <param name="position">�X�v���C�g�ʒu�̍��W</param>
/// <param name="width">�X�v���C�g�̒���</param>
/// <param name="height">�X�v���C�g�̍���</param>
/// <returns>���ꂽ�̃X�v���C�g�A�j���^��</returns>
SPRITE_ANIME CreateSpriteAnimator(int frameCount, const char* fileName, POSITION_2D position, int width, int height);

/// <summary>
/// �X�v���C�g�A�j���^�����X�V�p�o�b�t�@�ɏ�������
/// </summary>
/// <param name="spriteAnimator">�������݂����X�v���C�g�A�j���^���Ɏw���̃|�C���^</param>
/// <param name="offset">�Έڗ�</param>
void DrawSpriteAnimatorToUpdateBuffer(SPRITE_ANIME* spriteAnimator, int offset);

/// <summary>
/// �X�v���C�g�A�j���^�����J�����o�b�t�@�ɏ�������
/// </summary>
/// <param name="camBuffer">�J�����o�b�t�@�Ɏw���̃|�C���^</param>
/// <param name="spriteAnimator">�������݂����X�v���C�g�A�j���^���Ɏw���̃|�C���^</param>
/// <param name="offset">�Έڗ�</param>
/// <param name="posInCam">�������݂������W</param>
void DrawSpriteAnimatorToCamBuffer(SCENECAMERA* camBuffer, SPRITE_ANIME* spriteAnimator, int offset, POSITION_2D posInCam, int showSpace = 0);
