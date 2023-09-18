// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "KtrPaletteCategory.h"
#include "CommonTextBlock.h"
#include "KtrCommonTextBlock.generated.h"

/**
 * 
 */
UCLASS()
class UKtrCommonTextBlock : public UCommonTextBlock
{
	GENERATED_BODY()
public:
#if WITH_EDITOR
	virtual const FText GetPaletteCategory()override
	{
		return KtrPaletteCategory::KtrCommonUI;
	};
#endif
};
