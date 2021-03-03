//------------------------------------------------------------------------
// �t�@�C����: LogsOutput.h
// �@�\: �F��ȃ��O���A�E�g�v�b�g���ɏo�͂���
//------------------------------------------------------------------------

#pragma once

#include <stdio.h>
#include <Windows.h>
#include <tchar.h>

/// <summary>
/// �P���ȕ������O�𗓂ɏo�͂���
/// </summary>
/// <param name="text">���O�̓��e</param>
void DebugLog(const char* text);

/// <summary>
/// �h�m�s�^���e���t���Ă��郍�O�𗓂ɏo�͂���
/// </summary>
/// <param name="text">���O�̕������e</param>
/// <param name="value">�h�m�s�^�̓��e</param>
void DebugLogI1(const char* text, const int value);

/// <summary>
/// �h�m�s�^���e���t���Ă��郍�O�𗓂ɏo�͂���
/// </summary>
/// <param name="text">���O�̕������e</param>
/// <param name="value1">�h�m�s�^�̓��e</param>
/// <param name="value2">�h�m�s�^�̓��e</param>
void DebugLogI2(const char* text, const int value1, const int value2);

/// <summary>
/// ���O���t�@�C���ɏ�������
/// </summary>
/// <param name="text">���O�̓��e</param>
void DebugLogToFile(const char* text);

/// <summary>
/// �P���ȃG���[���O�𗓂ɏo�͂���
/// </summary>
/// <param name="text">���O�̕������e</param>
void ErrorLog(const char* text);

/// <summary>
/// �h�m�s�^���e���t���Ă���G���[���O�𗓂ɏo�͂���
/// </summary>
/// <param name="text">���O�̕������e</param>
/// <param name="value">�h�m�s�^�̓��e</param>
void ErrorLogI1(const char* text, const int value);

/// <summary>
/// �h�m�s�^���e���t���Ă���G���[���O�𗓂ɏo�͂���
/// </summary>
/// <param name="text">���O�̕������e</param>
/// <param name="value1">�h�m�s�^�̓��e</param>
/// <param name="value2">�h�m�s�^�̓��e</param>
void ErrorLogI2(const char* text, const int value1, const int value2);
