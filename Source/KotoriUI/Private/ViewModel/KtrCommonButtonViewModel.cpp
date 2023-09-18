// Fill out your copyright notice in the Description page of Project Settings.


#include "..\..\Public\ViewModel\KtrCommonButtonViewModel.h"

void UKtrCommonButtonViewModel::SetButtonText(const FText& InText)
{
	if(!ButtonText.EqualTo(InText))
	{
		ButtonText = InText;
		UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(GetButtonText);
	}
}

FText UKtrCommonButtonViewModel::GetButtonText() const
{
	return ButtonText;
}
