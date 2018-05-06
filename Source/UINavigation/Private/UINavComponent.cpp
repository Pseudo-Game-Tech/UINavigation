// Copyright (C) 2018 Gon�alo Marques - All Rights Reserved

#include "UINavComponent.h"
#include "UINavButton.h"
#include "UINavWidget.h"


void UUINavComponent::NativeConstruct()
{
	Super::NativeConstruct();

	bIsFocusable = false;

	check(NavButton != nullptr && "Button Component has no associated UINavButton");
}

