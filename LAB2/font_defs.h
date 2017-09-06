/*============================================================================================
 *
 *  (C) 2010, Phyton
 *
 *  ���������������� ������ ��� 1986BE91 testboard
 *
 *  ������ �� ��������������� "��� ����", �.�. ������������� ��� ������, ���������� ��������� 
 *  ������������� ���������� �� ���������� ��� ����������� Milandr 1986BE91T1. �������� Phyton 
 *  �� ����� ������� ��������������� �� ��������� ����������� ������������� �������, ��� 
 *  �������������� ������������� �� ��� ������, ��.
 *
 *--------------------------------------------------------------------------------------------
 *
 *  ���� font_defs.h: �������� �������� �������
 *
 *============================================================================================*/

#ifndef __FONT_DEFS_H
#define __FONT_DEFS_H

#include "types.h"

/*--------------------------------------------------------------------------------------------*/
/* ��������� �������� ������.                                                                 */

typedef struct tag_FONT {
  u32  Height;        /* ������ ������� � ��������. */
  u32  Width;         /* ������ ������� � ��������. */
  u32  Count;         /* ����� �������� � ������ ����� ����. */
  u8  *pData;         /* ����� ������� � ��������� �������� ������. */
} FONT;

/*--------------------------------------------------------------------------------------------*/
/* ������                                                                                     */

extern FONT Font_6x8;           /* 6  � 8  ��������             */
extern FONT Font_7x10_thin;     /* 7  � 10 �������� ������      */
extern FONT Font_7x10_bold;     /* 7  � 10 �������� ����������  */
extern FONT Font_12x16;         /* 12 � 16 ��������             */

#endif /* __FONT_DEFS_H */

/*============================================================================================
 * ����� ����� font_defs.h
 *============================================================================================*/
