// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "Components/Button.h"
#include "UI/MenuWidgetBase.h"
#include "MainMenu.generated.h"


/**
 * 
 */
UCLASS()
class MAINMENUSYSTEM_API UMainMenu : public UMenuWidgetBase
{
	GENERATED_BODY()

protected:
	virtual void InitMenuBindings() override;

protected:

	// Menus
	UPROPERTY(meta = (BindWidget))
	UButton* GameSettingsButton = nullptr;

	UPROPERTY(meta = (BindWidget))
	UButton* ExitGameButton = nullptr;

	UPROPERTY(meta = (BindWidgetOptional))
	UButton* MultiPlayerButton = nullptr;


};
