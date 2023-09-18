// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"

#include "KtrViewModelBase.generated.h"

/**
 * 
 */
UCLASS()
class KOTORIUI_API UKtrViewModelBase : public UMVVMViewModelBase
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	virtual void SetVisibility(ESlateVisibility InVisibility);

	UFUNCTION(BlueprintPure, FieldNotify)
	ESlateVisibility GetVisibility() const;
	
private:
	ESlateVisibility Visibility;
};
