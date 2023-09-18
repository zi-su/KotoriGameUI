// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonUI/KtrCommonActivatableWidget.h"
#include "CommonUI/KtrPaletteCategory.h"
#include "KtrCommonMenuBase.generated.h"

/**
 * 
 */
UCLASS()
class KOTORIUI_API UKtrCommonMenuBase : public UKtrCommonActivatableWidget
{
	GENERATED_BODY()

	/**
	 * メニュー操作、マウスキャプチャせず、カーソル表示にする初期設定
	 * 継承先で任意に上書きする
	 * @return 
	 */
	virtual TOptional<FUIInputConfig> GetDesiredInputConfig() const override;

#if WITH_EDITOR
	virtual const FText GetPaletteCategory() override{return KtrPaletteCategory::KtrMenu;};
#endif
	
};
