// Fill out your copyright notice in the Description page of Project Settings.


#include "..\..\Public\ViewModel\KtrViewModelBase.h"

void UKtrViewModelBase::SetVisibility(ESlateVisibility InVisibility)
{
	if(Visibility != InVisibility)
	{
		Visibility = InVisibility;
		UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(GetVisibility);
	}
}

ESlateVisibility UKtrViewModelBase::GetVisibility() const
{
	return Visibility;
}
