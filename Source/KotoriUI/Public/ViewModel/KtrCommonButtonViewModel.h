// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "KtrViewModelBase.h"
#include "KtrCommonButtonViewModel.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FKtrCommonButtonDelegate);
/**
 * 汎用ボタンビューモデル
 */
UCLASS()
class KOTORIUI_API UKtrCommonButtonViewModel : public UKtrViewModelBase
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	virtual void SetButtonText(const FText& InText);

	UFUNCTION(BlueprintPure, FieldNotify)
	FText GetButtonText() const;

	UPROPERTY(BlueprintCallable, BlueprintAssignable)
	FKtrCommonButtonDelegate OnClicked;
	UPROPERTY(BlueprintCallable, BlueprintAssignable)
	FKtrCommonButtonDelegate OnHovered;
	UPROPERTY(BlueprintCallable, BlueprintAssignable)
	FKtrCommonButtonDelegate OnUnhovered;
	
private:
	FText ButtonText = FText::FromString("TextBlock");
};
