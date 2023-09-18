// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/KtrCommonMenuBase.h"

TOptional<FUIInputConfig> UKtrCommonMenuBase::GetDesiredInputConfig() const
{
	return FUIInputConfig(ECommonInputMode::Menu, EMouseCaptureMode::NoCapture, false);
}
