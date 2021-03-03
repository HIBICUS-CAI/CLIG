//------------------------------------------------------------------------
// �t�@�C����: AppDeclared.h
// �@�\: �g���v�f�Ɋւ��Ă̒l�̐���
//------------------------------------------------------------------------

#pragma once
#include "GameAppStructs.h"
#include "SoundManager.h"

#define SCENENODESIZE 20

/// <summary>
/// �V�[���z����擾
/// </summary>
/// <returns>�V�[���z��</returns>
SCENENODE* GetSceneNodeArray();

/// <summary>
/// �V�[���z���ݒ�
/// </summary>
/// <param name="index">�V�[���̕Έڗ�</param>
/// <param name="temp">�Վ��I�ȃV�[������</param>
void SetSceneNodeArray(int index, SCENENODE temp);

/// <summary>
/// �g���Ă���V�[����ݒ�
/// </summary>
/// <param name="sceneNode">�V�[���w���̃|�C���^</param>
void SetCurrScene(SCENENODE* sceneNode);

/// <summary>
/// �g���Ă���V�[�����擾
/// </summary>
/// <returns>�V�[���w���̃|�C���^</returns>
SCENENODE* GetCurrScene();

