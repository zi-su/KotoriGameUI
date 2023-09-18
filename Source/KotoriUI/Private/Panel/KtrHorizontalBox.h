// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/HorizontalBox.h"
#include "CommonUI/KtrPaletteCategory.h"
#include "KtrHorizontalBox.generated.h"

/**
 * 
 */
UCLASS()
class KOTORIUI_API UKtrHorizontalBox : public UHorizontalBox
{
	GENERATED_BODY()
#if WITH_EDITOR
	virtual const FText GetPaletteCategory() override{return KtrPaletteCategory::KtrPanel;}
#endif
	
};
