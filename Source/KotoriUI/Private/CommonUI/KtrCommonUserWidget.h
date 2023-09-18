// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "KtrPaletteCategory.h"
#include "Containers/Deque.h"
#include "KtrCommonUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class KOTORIUI_API UKtrCommonUserWidget : public UCommonUserWidget
{
	GENERATED_BODY()

protected:
	virtual void OnAnimationStarted_Implementation(const UWidgetAnimation* Animation) override;
	virtual void OnAnimationFinished_Implementation(const UWidgetAnimation* Animation) override;

public:
#if WITH_EDITOR
	virtual const FText GetPaletteCategory() override{return KtrPaletteCategory::KtrCommonUserWidget;};
#endif
};
