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
#include "Worker.h"
#include "UObject/Object.h"
#include "IBoss.generated.h"
/**
 * 工头
 */
UINTERFACE()
class FANTASYENGINE_NETWORK_API UIBoss : public UInterface
{
	GENERATED_BODY()
};

/**
 * 工头
 */
class FANTASYENGINE_NETWORK_API IIBoss
{
	GENERATED_BODY()
public:
	/**
	 * @brief 工人加入
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Fantasy Engine|Boss")
	void CheckIn(UWorker* Worker);
	/**
	 * @brief 工人加入
	 */
	virtual void CheckIn_Implementation(UWorker* Worker);
};
