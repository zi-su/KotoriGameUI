

#pragma once

#include "CoreMinimal.h"
#include "..\CommonUI\KtrPaletteCategory.h"
#include "Components/CanvasPanel.h"
#include "KtrCanvasPanel.generated.h"

/**
 * 
 */
UCLASS()
class KOTORIUI_API UKtrCanvasPanel : public UCanvasPanel
{
	GENERATED_BODY()
#if WITH_EDITOR
	virtual const FText GetPaletteCategory() override{return KtrPaletteCategory::KtrPanel;};
#endif
};
