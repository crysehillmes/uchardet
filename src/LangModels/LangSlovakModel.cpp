/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1/GPL 2.0/LGPL 2.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is Mozilla Communicator client code.
 *
 * The Initial Developer of the Original Code is
 * Netscape Communications Corporation.
 * Portions created by the Initial Developer are Copyright (C) 1998
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPL"), or
 * the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
 * in which case the provisions of the GPL or the LGPL are applicable instead
 * of those above. If you wish to allow use of your version of this file only
 * under the terms of either the GPL or the LGPL, and not to allow others to
 * use your version of this file under the terms of the MPL, indicate your
 * decision by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL or the LGPL. If you do not delete
 * the provisions above, a recipient may use your version of this file under
 * the terms of any one of the MPL, the GPL or the LGPL.
 *
 * ***** END LICENSE BLOCK ***** */

#include "../nsSBCharSetProber.h"

/********* Language model for: Slovak *********/

/**
 * Generated by BuildLangModel.py
 * On: 2016-09-21 13:33:10.331339
 **/

/* Character Mapping Table:
 * ILL: illegal character.
 * CTR: control character specific to the charset.
 * RET: carriage/return.
 * SYM: symbol (punctuation) that does not belong to word.
 * NUM: 0 - 9.
 *
 * Other characters are ordered by probabilities
 * (0 is the most common character in the language).
 *
 * Orders are generic to a language. So the codepoint with order X in
 * CHARSET1 maps to the same character as the codepoint with the same
 * order X in CHARSET2 for the same language.
 * As such, it is possible to get missing order. For instance the
 * ligature of 'o' and 'e' exists in ISO-8859-15 but not in ISO-8859-1
 * even though they are both used for French. Same for the euro sign.
 */
static const unsigned char Ibm852_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 20, 15, 11,  2, 29, 30, 17,  4, 18,  7, 10, 12,  3,  0, /* 4X */
   13, 40,  6,  8,  5, 14,  9, 37, 34, 19, 16,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 20, 15, 11,  2, 29, 30, 17,  4, 18,  7, 10, 12,  3,  0, /* 6X */
   13, 40,  6,  8,  5, 14,  9, 37, 34, 19, 16,SYM,SYM,SYM,SYM,CTR, /* 7X */
   51, 46, 25, 62, 38, 48, 47, 51, 49, 54, 50, 50, 63, 64, 38, 47, /* 8X */
   25, 42, 42, 32, 43, 33, 33, 65, 66, 43, 46, 31, 31, 49,SYM, 24, /* 9X */
   21, 23, 35, 27, 67, 68, 26, 26, 69, 70,SYM, 71, 24, 59,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 21, 72, 41, 59,SYM,SYM,SYM,SYM, 61, 61,SYM, /* BX */
  SYM,SYM,SYM,SYM,SYM,SYM, 56, 56,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* CX */
   55, 55, 39, 54, 39, 36, 23, 73, 41,SYM,SYM,SYM,SYM, 74, 48,SYM, /* DX */
   35, 58, 32, 52, 52, 36, 28, 28, 44, 27, 44, 60, 22, 22, 75,SYM, /* EX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, 60, 45, 45,SYM,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_2_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 20, 15, 11,  2, 29, 30, 17,  4, 18,  7, 10, 12,  3,  0, /* 4X */
   13, 40,  6,  8,  5, 14,  9, 37, 34, 19, 16,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 20, 15, 11,  2, 29, 30, 17,  4, 18,  7, 10, 12,  3,  0, /* 6X */
   13, 40,  6,  8,  5, 14,  9, 37, 34, 19, 16,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM, 76,SYM, 49,SYM, 33, 77,SYM,SYM, 28, 59, 31, 78,SYM, 26, 61, /* AX */
  SYM, 79,SYM, 49,SYM, 33, 80,SYM,SYM, 28, 59, 31, 81,SYM, 26, 61, /* BX */
   44, 21, 82, 56, 38, 42, 47, 51, 24, 25, 83, 54, 41, 23, 84, 39, /* CX */
   55, 52, 36, 35, 32, 50, 43,SYM, 45, 48, 27, 60, 46, 22, 85, 58, /* DX */
   44, 21, 86, 56, 38, 42, 47, 51, 24, 25, 87, 54, 41, 23, 88, 39, /* EX */
   55, 52, 36, 35, 32, 50, 43,SYM, 45, 48, 27, 60, 46, 22, 89,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Mac_Centraleurope_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 20, 15, 11,  2, 29, 30, 17,  4, 18,  7, 10, 12,  3,  0, /* 4X */
   13, 40,  6,  8,  5, 14,  9, 37, 34, 19, 16,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 20, 15, 11,  2, 29, 30, 17,  4, 18,  7, 10, 12,  3,  0, /* 6X */
   13, 40,  6,  8,  5, 14,  9, 37, 34, 19, 16,SYM,SYM,SYM,SYM,CTR, /* 7X */
   38, 90, 91, 25, 92, 43, 46, 21, 93, 24, 38, 24, 47, 47, 25, 94, /* 8X */
   95, 39, 23, 39, 96, 97, 98, 35, 99, 32, 43,100, 27, 41, 41, 46, /* 9X */
  SYM,SYM,101,SYM,SYM,SYM,SYM, 58,SYM,SYM,SYM,102,SYM,SYM,103,104, /* AX */
  105, 57,SYM,SYM, 57,106,SYM,SYM, 49,107,108, 33, 33, 42, 42,109, /* BX */
  110, 52,SYM,SYM, 52, 36,SYM,SYM,SYM,SYM,SYM, 36, 50,111, 50, 53, /* CX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, 53, 44, 44, 45,SYM,SYM, 45,112, /* DX */
  113, 28,SYM,SYM, 28,114,115, 21, 31, 31, 23, 26, 26,116, 35, 32, /* EX */
  117, 48, 27, 48, 60, 60,118,119, 22, 22,120, 61, 49, 61,121,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1250_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  1, 20, 15, 11,  2, 29, 30, 17,  4, 18,  7, 10, 12,  3,  0, /* 4X */
   13, 40,  6,  8,  5, 14,  9, 37, 34, 19, 16,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  1, 20, 15, 11,  2, 29, 30, 17,  4, 18,  7, 10, 12,  3,  0, /* 6X */
   13, 40,  6,  8,  5, 14,  9, 37, 34, 19, 16,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM,ILL,SYM,SYM,SYM,SYM,ILL,SYM, 28,SYM,122, 31, 26,123, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,SYM, 28,SYM,124, 31, 26,125, /* 9X */
  SYM,SYM,SYM, 49,SYM,126,SYM,SYM,SYM,SYM, 59,SYM,SYM,SYM,SYM, 61, /* AX */
  SYM,SYM,SYM, 49,SYM,SYM,SYM,SYM,SYM,127, 59,SYM, 33,SYM, 33, 61, /* BX */
   44, 21,128, 56, 38, 42, 47, 51, 24, 25,129, 54, 41, 23,130, 39, /* CX */
   55, 52, 36, 35, 32, 50, 43,SYM, 45, 48, 27, 60, 46, 22,131, 58, /* DX */
   44, 21,132, 56, 38, 42, 47, 51, 24, 25,133, 54, 41, 23,134, 39, /* EX */
   55, 52, 36, 35, 32, 50, 43,SYM, 45, 48, 27, 60, 46, 22,135,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */


/* Model Table:
 * Total sequences: 1181
 * First 512 sequences: 0.9733303573968434
 * Next 512 sequences (512-1024): 0.026317344239265295
 * Rest: 0.0003522983638913346
 * Negative sequences: TODO
 */
static const PRUint8 SlovakLangModel[] =
{
  2,2,2,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,
   0,0,3,2,3,1,2,3,3,1,0,3,2,0,3,2,0,1,2,0,0,0,0,
  2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,
   0,0,3,0,3,0,3,3,3,3,0,2,3,1,2,2,0,2,2,0,0,0,0,
  3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,
   0,2,3,0,3,2,3,3,3,2,0,3,3,3,3,2,0,3,2,0,0,1,0,
  3,3,3,3,3,3,2,3,3,2,2,3,2,2,3,3,2,2,2,3,2,3,
   3,3,3,3,2,3,3,2,3,0,2,0,0,2,0,2,0,0,2,2,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,
   0,3,3,2,3,0,3,3,3,3,0,2,2,3,2,2,0,0,2,0,0,0,0,
  3,3,3,3,3,2,3,3,3,3,3,1,3,2,3,2,3,3,2,3,2,3,
   3,3,2,3,0,3,2,2,2,1,0,2,0,3,2,2,2,2,1,2,1,1,2,
  3,3,3,3,3,3,2,3,3,3,2,3,3,2,3,3,2,2,2,3,3,3,
   3,3,3,3,2,2,2,2,3,2,3,0,2,3,2,2,2,0,2,0,0,1,0,
  3,3,3,2,3,3,3,2,2,3,3,3,3,1,3,3,2,2,2,3,2,3,
   3,2,2,3,2,3,2,2,2,0,3,2,0,2,2,2,0,0,0,0,0,2,1,
  3,3,3,3,3,3,2,3,3,3,3,2,3,3,3,3,2,2,2,3,2,3,
   2,3,2,2,1,3,0,2,2,3,2,2,0,2,2,2,0,0,2,0,0,0,0,
  3,3,3,3,3,2,3,2,3,0,3,3,2,3,3,2,3,2,0,3,2,3,
   3,3,2,3,2,2,3,1,2,0,2,0,0,0,2,0,3,2,0,2,2,1,2,
  3,3,3,3,3,3,2,3,3,2,3,2,2,2,3,2,2,2,2,3,3,3,
   3,3,2,3,2,3,2,2,3,0,1,0,0,3,2,0,0,0,0,0,0,0,0,
  3,3,3,3,3,2,3,3,3,3,3,2,3,3,3,3,3,2,2,3,2,3,
   3,3,2,2,2,2,2,2,2,0,3,3,2,2,2,2,0,0,0,2,2,0,0,
  3,3,3,3,3,3,2,2,3,1,2,2,3,3,3,2,0,0,2,3,3,3,
   2,3,0,2,2,2,0,0,2,0,3,0,1,2,1,0,3,0,2,0,0,2,2,
  3,3,3,3,3,3,3,2,2,0,3,2,2,2,3,2,1,2,0,2,2,3,
   2,3,1,2,0,2,2,0,1,2,3,1,0,2,2,0,2,0,0,2,2,0,0,
  2,2,2,3,2,3,3,3,3,3,3,3,3,3,2,3,3,3,3,2,3,3,
   0,3,3,1,3,1,2,2,3,2,0,2,2,0,1,2,0,2,2,0,0,0,0,
  3,3,3,3,3,2,2,3,2,2,2,2,2,0,3,2,2,3,0,2,0,2,
   1,3,0,2,0,3,0,1,2,2,0,0,0,2,2,0,0,0,2,0,0,0,0,
  3,3,3,3,3,2,3,3,3,3,3,3,3,2,3,2,2,3,2,3,2,3,
   3,2,1,2,1,2,2,0,2,2,0,2,0,2,2,2,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,2,2,2,3,2,3,1,3,2,0,2,1,3,2,3,
   3,2,2,2,0,2,2,1,0,0,0,2,0,1,2,2,1,0,0,0,2,1,2,
  3,3,3,3,3,3,2,2,3,3,2,2,3,2,3,2,2,2,2,0,2,2,
   0,3,2,0,0,3,3,0,2,1,0,2,0,2,0,0,1,0,0,0,0,0,0,
  2,2,2,3,2,3,3,3,3,3,3,2,3,3,2,3,3,3,2,0,3,0,
   0,0,2,0,2,2,3,1,2,3,0,1,0,1,2,1,0,0,0,0,0,0,0,
  3,3,3,3,3,1,3,2,3,2,3,3,2,0,3,2,2,2,3,3,2,3,
   2,2,2,2,1,2,2,0,2,0,1,0,0,1,2,0,1,0,0,0,0,1,0,
  0,0,0,3,0,3,3,3,3,3,3,3,3,3,2,3,3,2,3,0,3,0,
   0,0,2,0,2,0,3,0,1,0,0,2,0,0,2,0,0,2,0,0,0,0,0,
  0,0,0,2,0,2,3,2,2,3,2,2,3,2,0,3,3,2,2,0,2,0,
   0,0,1,0,2,0,2,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
  0,2,0,3,0,3,3,3,3,3,3,2,3,3,0,3,2,2,2,0,2,0,
   0,0,2,0,2,0,3,0,1,2,0,2,0,0,1,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,2,3,2,0,3,0,2,0,2,2,0,0,0,0,0,2,
   0,3,0,1,1,1,3,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,
  1,0,0,2,0,3,3,2,2,2,2,2,3,2,0,3,3,3,0,0,1,0,
   0,0,2,0,0,0,2,2,2,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
  3,3,3,3,3,0,1,2,3,1,1,3,1,0,3,0,0,0,2,0,2,0,
   0,3,0,1,0,0,2,0,0,0,0,0,0,0,2,0,0,2,0,0,0,0,0,
  1,0,0,3,0,3,3,2,3,3,3,3,2,3,0,3,3,2,0,0,2,0,
   0,0,3,0,2,0,2,2,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,0,2,2,2,3,1,2,3,2,0,0,2,0,0,2,1,
   0,3,2,1,0,1,2,0,0,2,0,2,0,0,1,0,0,0,0,0,0,0,0,
  3,3,3,2,3,2,3,0,2,1,2,0,2,0,3,0,0,2,0,3,0,2,
   0,2,0,2,0,1,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,2,3,2,3,0,2,2,3,2,2,0,3,2,0,2,0,2,0,2,
   0,0,0,2,0,2,0,0,2,0,0,0,0,2,0,1,0,0,0,0,0,2,0,
  3,3,0,0,1,0,2,1,0,0,0,2,0,1,2,0,0,0,0,0,0,1,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,2,3,3,3,3,3,2,1,0,0,2,3,0,0,0,2,0,
   0,0,0,0,3,0,1,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,
  3,3,0,3,0,0,0,3,2,2,0,0,2,0,3,0,1,1,0,0,2,0,
   0,0,1,0,0,2,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  2,2,2,2,3,2,0,1,0,0,2,0,2,3,2,0,0,0,0,2,0,0,
   0,2,0,0,0,0,0,2,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,
  0,0,0,3,0,2,3,1,2,1,2,3,3,2,0,2,2,0,0,0,3,0,
   0,0,0,0,1,0,0,1,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,0,0,0,0,0,0,0,0,0,1,2,0,2,0,0,2,0,0,0,2,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  2,2,2,1,3,2,0,1,2,0,2,0,2,1,0,0,0,2,0,1,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,
  0,0,0,2,0,2,1,1,0,0,0,2,0,0,0,2,2,0,0,0,2,0,
   0,0,3,0,0,0,0,0,2,2,0,0,0,0,0,0,2,0,0,0,0,0,0,
  2,3,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,
   0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,2,0,0,1,0,0,0,0,2,0,0,0,0,0,0,2,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,2,0,2,2,2,0,0,1,0,1,0,0,1,2,0,2,0,0,0,
   0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,2,0,
   0,0,0,0,2,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,
  0,0,0,2,0,2,2,0,2,0,1,2,1,0,0,0,0,2,0,0,2,0,
   0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,2,0,0,0,0,0,0,1,0,0,0,0,2,0,0,0,0,
   0,0,0,0,0,0,2,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,
};


const SequenceModel Ibm852SlovakModel =
{
  Ibm852_CharToOrderMap,
  SlovakLangModel,
  45,
  (float)0.9733303573968434,
  PR_TRUE,
  "IBM852",
  "sk"
};

const SequenceModel Iso_8859_2SlovakModel =
{
  Iso_8859_2_CharToOrderMap,
  SlovakLangModel,
  45,
  (float)0.9733303573968434,
  PR_TRUE,
  "ISO-8859-2",
  "sk"
};

const SequenceModel Mac_CentraleuropeSlovakModel =
{
  Mac_Centraleurope_CharToOrderMap,
  SlovakLangModel,
  45,
  (float)0.9733303573968434,
  PR_TRUE,
  "MAC-CENTRALEUROPE",
  "sk"
};

const SequenceModel Windows_1250SlovakModel =
{
  Windows_1250_CharToOrderMap,
  SlovakLangModel,
  45,
  (float)0.9733303573968434,
  PR_TRUE,
  "WINDOWS-1250",
  "sk"
};
