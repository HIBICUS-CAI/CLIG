//------------------------------------------------------------------------
// �t�@�C����: SceneNode.h
// �@�\: �V�[���Ɋւ��Ă̋@�\
//------------------------------------------------------------------------

#pragma once

#include "AppDeclared.h"
#include "UIObject.h"
#include "DeclaredValues.h"

/// <summary>
/// �ԍ��ł���V�[�������o��
/// </summary>
/// <param name="id">�V�[���ԍ�</param>
/// <returns>���o�������V�[���Ɏw���̃|�C���^</returns>
SCENENODE* GetSceneNodeByID(int id);

/// <summary>
/// ���O�ł���V�[�������o��
/// </summary>
/// <param name="name">�V�[���̖��O</param>
/// <returns>���o�������V�[���Ɏw���̃|�C���^</returns>
SCENENODE* GetSceneNodeByName(const char* name);

/// <summary>
/// �V�[���z�������������
/// </summary>
void InitSceneNodes();

/// <summary>
/// ����V�[���̃J�����o�b�t�@�𐮗�����
/// </summary>
/// <param name="sceneNode">�V�[���w���̃|�C���^</param>
void ClearSceneCamBuffer(SCENENODE* sceneNode);

/// <summary>
/// �V�[���z��ɐV���ȃV�[����ǉ�
/// </summary>
/// <param name="sceneNode">�V���ȃV�[���̓��e</param>
void CreateSceneNode(SCENENODE sceneNode);

/// <summary>
/// ����V�[���̓��e���X�V�p�o�b�t�@�ɏ�������
/// </summary>
/// <param name="sceneNode">�V�[���w���̃|�C���^</param>
void DrawScene(SCENENODE* sceneNode);
