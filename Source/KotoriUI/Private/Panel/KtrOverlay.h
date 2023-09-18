// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Overlay.h"
#include "CommonUI/KtrPaletteCategory.h"
#include "KtrOverlay.generated.h"

/**
 * 
 */
UCLASS()
class KOTORIUI_API UKtrOverlay : public UOverlay
{
	GENERATED_BODY()

#if WITH_EDITOR
	virtual const FText GetPaletteCategory() override{return KtrPaletteCategory::KtrPanel;}
#endif
};
