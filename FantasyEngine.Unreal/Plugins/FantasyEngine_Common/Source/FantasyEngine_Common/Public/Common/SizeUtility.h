﻿/****************************************************************************
THIS FILE IS PART OF Fantasy Engine PROJECT
THIS PROGRAM IS FREE SOFTWARE, IS LICENSED UNDER MIT

Copyright (c) 2022-2030 ChenYiZh
https://space.bilibili.com/9308172

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
****************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SizeUtility.generated.h"

/**
 * 长度管理类
 */
UCLASS(Category="Fantasy Engine", DisplayName="Size")
class FANTASYENGINE_COMMON_API USizeUtility : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/** bool 长度 */
	const static int32 BoolSize;
	/** char 长度 */
	//const static int32 CharSize;

	/** float 长度 */
	const static int32 FloatSize;
	/** double 长度 */
	const static int32 DoubleSize;

	/** int8 长度 */
	const static int32 SByteSize;
	/** int16 长度 */
	const static int32 ShortSize;
	/** int32 长度 */
	const static int32 IntSize;
	/** int64 长度 */
	const static int32 LongSize;

	/** uint8 长度 */
	const static int32 ByteSize;
	/** uint16 长度 */
	const static int32 UShortSize;
	/** uint32 长度 */
	const static int32 UIntSize;
	/** uint64 长度 */
	const static int32 ULongSize;

	/** ANSICHAR 长度 */
	const static int32 ANSICHARSize;
	/** CHAR 长度 */
	//const static int32 CHARSize;
	/** TCHAR 长度 */
	const static int32 TCHARSize;


	/** 颜色长度 */
	const static int32 COLORSIZE;

public:
	/** bool 长度 */
	UFUNCTION(BlueprintPure, Category="Fantasy Engine|Size", DisplayName="Bool Size")
	static int32 GetBoolSize();
	/** char 长度 */
	// UFUNCTION(BlueprintPure, Category="Fantasy Engine|Size", DisplayName="Char Size")
	// static int32 GetCharSize();

	/** float 长度 */
	UFUNCTION(BlueprintPure, Category="Fantasy Engine|Size", DisplayName="Float Size")
	static int32 GetFloatSize();
	/** double 长度 */
	UFUNCTION(BlueprintPure, Category="Fantasy Engine|Size", DisplayName="Double Size")
	static int32 GetDoubleSize();

	/** int8 长度 */
	UFUNCTION(BlueprintPure, Category="Fantasy Engine|Size", DisplayName="SByte Size")
	static int32 GetSByteSize();
	/** int16 长度 */
	UFUNCTION(BlueprintPure, Category="Fantasy Engine|Size", DisplayName="Short Size")
	static int32 GetShortSize();
	/** int32 长度 */
	UFUNCTION(BlueprintPure, Category="Fantasy Engine|Size", DisplayName="Int Size")
	static int32 GetIntSize();
	/** int64 长度 */
	UFUNCTION(BlueprintPure, Category="Fantasy Engine|Size", DisplayName="Long Size")
	static int32 GetLongSize();

	/** uint8 长度 */
	UFUNCTION(BlueprintPure, Category="Fantasy Engine|Size", DisplayName="Byte Size")
	static int32 GetByteSize();
	/** uint16 长度 */
	UFUNCTION(BlueprintPure, Category="Fantasy Engine|Size", DisplayName="UShort Size")
	static int32 GetUShortSize();
	/** uint32 长度 */
	UFUNCTION(BlueprintPure, Category="Fantasy Engine|Size", DisplayName="UInt Size")
	static int32 GetUIntSize();
	/** uint64 长度 */
	UFUNCTION(BlueprintPure, Category="Fantasy Engine|Size", DisplayName="ULong Size")
	static int32 GetULongSize();

	/** ANSICHAR 长度 */
	UFUNCTION(BlueprintPure, Category="Fantasy Engine|Size", DisplayName="ANSICHAR Size")
	static int32 GetANSICHARSize();
	/** TCHAR 长度 */
	UFUNCTION(BlueprintPure, Category="Fantasy Engine|Size", DisplayName="TCHAR Size")
	static int32 GetTCHARSize();


	/** 颜色 长度 */
	UFUNCTION(BlueprintPure, Category="Fantasy Engine|Size", DisplayName="COLOR Size")
	static int32 GetColorSize();
};


