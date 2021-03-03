//------------------------------------------------------------------------
// �t�@�C����: DatabaseManager.h
// �@�\: �f�[�^�x�[�X�Ƃ̑�����ꊇ�ŊǗ�����
//------------------------------------------------------------------------

#pragma once

#include "Assets/Libs/MariaDB Connector C/include/mysql.h"

/// <summary>
/// �K�v�ȃf�[�^�x�[�X�n���h��������������
/// </summary>
/// <param name="dbHandle">�f�[�^�x�[�X�n���h��</param>
void InitDatabaseHandle(MYSQL* dbHandle);

/// <summary>
/// �f�[�^�x�[�X�ɐڑ�����
/// </summary>
/// <param name="dbHandle">�f�[�^�x�[�X�n���h��</param>
/// <param name="host">�f�[�^�x�[�XIP</param>
/// <param name="user">���[�U�[��</param>
/// <param name="passwd">�Ïؔԍ�</param>
/// <param name="database">�f�[�^�x�[�X��</param>
/// <returns>�ڑ��n���h��</returns>
MYSQL* ConnectToDatabase(MYSQL* dbHandle,
    const char* host, const char* user,
    const char* passwd, const char* database);

/// <summary>
/// �f�[�^�x�[�X�ւ̐ڑ������
/// </summary>
/// <param name="cnctHandle">�ڑ��n���h��</param>
void CloseConnectHandle(MYSQL* cnctHandle);

/// <summary>
/// ���SQL�������s����
/// </summary>
/// <param name="dbHandle">�f�[�^�x�[�X�n���h��</param>
/// <param name="requestStr">SQL��</param>
/// <returns>���s�������ۂ�</returns>
int RunQueryRequest(MYSQL* dbHandle, const char* requestStr);

/// <summary>
/// ���s���ʂ�������
/// </summary>
/// <param name="result">���s���ʃ|�C���^</param>
void FreeResultPointer(MYSQL_RES* result);

/// <summary>
/// SQL�������s�セ�̌��ʂ��擾
/// </summary>
/// <param name="dbHandle">�f�[�^�x�[�X�n���h��</param>
/// <param name="requestStr">SQL��</param>
/// <returns>���s���ʃ|�C���^</returns>
MYSQL_RES* RunQueryAndGetResult(MYSQL* dbHandle,
    const char* requestStr);

int GetResultRowCount(MYSQL_RES* resultPointer);
