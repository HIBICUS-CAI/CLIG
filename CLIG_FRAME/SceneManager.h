//------------------------------------------------------------------------
// �t�@�C����: SceneManager.h
// �@�\: �S�ẴV�[�����Ǘ�����@�\
//------------------------------------------------------------------------

#pragma once
#include "GameAppStructs.h"

#define TESTSCENEFLAG 1

/// <summary>
/// �V�[���̂��邵�擾
/// </summary>
/// <returns>�V�[���̋L��</returns>
int GetSceneFlag();

/// <summary>
/// ���g���Ă���V�[����ݒ�
/// </summary>
/// <param name="sceneNode">�V�[���w���̃|�C���^</param>
void SetManagedCurrScene(SCENENODE* sceneNode);

/// <summary>
/// ���g���Ă���V�[�����擾
/// </summary>
/// <returns>�V�[���w���̃|�C���^</returns>
SCENENODE* GetManagedCurrScene();

/// <summary>
/// �g���Ă���V�[��������������
/// </summary>
void InitCurrScene();

/// <summary>
/// �g���Ă���V�[�����X�V����
/// </summary>
void UpdateCurrScene();

/// <summary>
/// ����V�[���ɕϊ�����
/// </summary>
/// <param name="sceneName">�V�[���̖��O</param>
void SwitchSceneToName(const char* sceneName);
