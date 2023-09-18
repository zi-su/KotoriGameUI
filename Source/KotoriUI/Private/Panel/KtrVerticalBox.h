// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/VerticalBox.h"
#include "CommonUI/KtrPaletteCategory.h"
#include "KtrVerticalBox.generated.h"

/**
 * 
 */
UCLASS()
class KOTORIUI_API UKtrVerticalBox : public UVerticalBox
{
	GENERATED_BODY()
#if WITH_EDITOR
	virtual const FText GetPaletteCategory() override{return KtrPaletteCategory::KtrPanel;}
#endif
};
